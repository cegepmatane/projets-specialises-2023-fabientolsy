#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fstream"
#include "string"
#include "iostream"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    player = new QMediaPlayer(this);

    audio = new QAudioOutput;

    player->setAudioOutput(audio);
    connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChanged(qint64)));

    connect(player,&QMediaPlayer::durationChanged, ui->progressBar, &QProgressBar::setMaximum);
    connect(player,&QMediaPlayer::positionChanged, ui->progressBar, &QProgressBar::setValue);

    connect(player,&QMediaPlayer::durationChanged, ui->horizontalSlider, &QSlider::setMaximum);
    connect(player,&QMediaPlayer::positionChanged, ui->horizontalSlider, &QSlider::setValue);

    ui->progressBar->setRange(0,100);
    ui->progressBar->setValue(0);

    ui->horizontalSlider->setRange(0,100);
    ui->horizontalSlider->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_richGirl_clicked()
{
    titreBouton = "richGirl";

    // LECTURE DU FICHIER AUDIO
    /*player->setSource(QUrl::fromLocalFile(prefix + "chansons/richGirl.mp3"));
    audio->setVolume(50);
    player->play();*/

    lectureMusique(QString::fromStdString(titreBouton), prefix, player, audio);

    // On rend cliquable les boutons pause/lecture et affichage des paroles
    //activerBoutons(*ui);
    changementChanson(*ui);

    // Affichage du titre dans l'ecran
    afficherTitre(ui->richGirl->text().toStdString(), *ui);

}

void MainWindow::on_cantHoldUs_clicked()
{
    titreBouton = "cantHoldUs";

    // LECTURE DU FICHIER AUDIO
    lectureMusique(QString::fromStdString(titreBouton), prefix, player, audio);

    // On rend cliquable les boutons pause/lecture et affichage des paroles
    //activerBoutons(*ui);
    changementChanson(*ui);

    // Affichage du titre dans l'ecran
    afficherTitre(ui->cantHoldUs->text().toStdString(), *ui);
}

void MainWindow::on_onVerra_clicked()
{
    titreBouton = "onVerra";

    // LECTURE DU FICHIER AUDIO
    lectureMusique(QString::fromStdString(titreBouton), prefix, player, audio);

    // On rend cliquable les boutons pause/lecture et affichage des paroles
    //activerBoutons(*ui);
    changementChanson(*ui);

    // Affichage du titre dans l'ecran
    afficherTitre(ui->onVerra->text().toStdString(), *ui);
}

void MainWindow::on_paroles_stateChanged(int arg1)
{
    cerr << arg1;

    cerr << "On affiche les paroles originales";

    string const prefixTraduit = prefix.toStdString();

    if(arg1 == 2)
    {
        afficherParoles(titreBouton, *ui, prefixTraduit);

        ui->traduireParoles->setEnabled(true);
        ui->traduireParoles->setPalette(QColor(255,255,255,255));
    }

    else
    {
        ui->traduireParoles->setCheckState(Qt::Unchecked);
        ui->traduireParoles->setEnabled(false);
        ui->paroleAffichage->clear();
    }
}

void MainWindow::on_traduireParoles_stateChanged(int arg1)
{
    if(arg1 == 2)
    {
        cerr << "On peut traduire";
        afficherParolesTraduites(titreBouton, *ui, prefix);
    }
    else
    {
        MainWindow::on_paroles_stateChanged(2);
    }
}

void MainWindow::on_pause_clicked() { player->pause() ;}

void MainWindow::on_lecture_clicked(){ player->play(); }

void MainWindow::on_horizontalSlider_sliderMoved(int position) { player->setPosition(position); }

void afficherTitre(string titre, Ui::MainWindow ui)
{
    cerr << "Affichage du titre: " + titre;

    QString titreConverti = QString::fromStdString(titre);
    ui.titre->setText(titreConverti);


}

void lectureMusique(QString titre, QString prefix, QMediaPlayer* player, QAudioOutput* audio)
{
    player->setSource(QUrl::fromLocalFile(prefix + "chansons/" + titre + ".mp3"));
    audio->setVolume(50);
    player->play();
}

void changementChanson(Ui::MainWindow ui)
{
    desactiverBouton(ui);
    activerBoutons(ui);
}

void activerBoutons(Ui::MainWindow ui)
{
    // Bouton pour afficher les paroles cliquable
    ui.paroles->setEnabled(true);
    ui.paroles->setPalette(QColor(255,255,255,255));

    // Activation de la barre de progression et des boutons de pause
    ui.pause->setEnabled(true);
    ui.lecture->setEnabled(true);
    ui.progressBar->setEnabled(true);
}

void desactiverBouton(Ui::MainWindow ui)
{
    ui.paroles->setCheckState(Qt::Unchecked);
    ui.traduireParoles->setCheckState(Qt::Unchecked);
    // Bouton pour afficher les paroles cliquable
    ui.paroles->setEnabled(false);

    // Activation de la barre de progression et des boutons de pause
    ui.pause->setEnabled(false);
    ui.lecture->setEnabled(false);
    ui.progressBar->setEnabled(false);
}

void afficherParoles(string titre, Ui::MainWindow ui, string prefix)
{
    cerr << "On peut afficher les paroles";

    ifstream fichier;
    fichier.open(prefix + "paroles/originale/" + titre + ".txt", ios::in);

    list<string> listeParoles;
    string parole = " "; // VARIABLE OU IL Y A LES PAROLES

    if(fichier) // SI ON REUSSIT A OUVRIR LE FICHIER TEXT
    {
        cerr << "Fichier ouvert"; // ONAFFICHE DANS LA CONSOLE LA REUSSITE D'OUVERTURE

        ui.paroleAffichage->clear();

        list<string>::iterator it = listeParoles.begin();
        int compteurMot = 0;

        for(string s; fichier >> s;)
        {
            parole = s + ' ';

            listeParoles.insert(it, parole);
        }

        if(listeParoles.empty())
        {
            cerr << "Liste vide !";
        }
        else
        {
            cerr << "Acces a la liste: ";

            for(string paroles : listeParoles)
            {
                cerr << paroles;

                QString affichage = QString::fromStdString(paroles);
                QString valeurparoleAffichage = ui.paroleAffichage->text();

                if(compteurMot < 30)
                {
                    ui.paroleAffichage->setText(valeurparoleAffichage + " " + affichage);

                    compteurMot = compteurMot + 1;
                }
                else
                {
                    ui.paroleAffichage->setText(valeurparoleAffichage + '\n' + affichage);
                    compteurMot = 1;
                }

            }
        }
   }
}

void afficherParolesTraduites(string titre, Ui::MainWindow ui, QString prefix)
{
    cerr << "On peut traduire les paroles";

    ifstream fichier;
    string const prefixTraduit = prefix.toStdString();
    fichier.open(prefixTraduit + "paroles/traduire/" + titre + ".txt", ios::in);

    list<string> listeParoles;
    string parole = " "; // VARIABLE OU IL Y A LES PAROLES

    if(fichier) // SI ON REUSSIT A OUVRIR LE FICHIER TEXT
    {
        cerr << "Fichier ouvert"; // ONAFFICHE DANS LA CONSOLE LA REUSSITE D'OUVERTURE

        ui.paroleAffichage->clear();

        list<string>::iterator it = listeParoles.begin();
        int compteurMot = 0;

        for(string s; fichier >> s;)
        {
            parole = s + ' ';

            listeParoles.insert(it, parole);
        }

        if(listeParoles.empty())
        {
            cerr << "Liste vide !";
        }
        else
        {
            cerr << "Acces a la liste: ";

            for(string paroles : listeParoles)
            {
                cerr << paroles;

                QString affichage = QString::fromStdString(paroles);
                QString valeurparoleAffichage = ui.paroleAffichage->text();

                if(compteurMot < 30)
                {
                    ui.paroleAffichage->setText(valeurparoleAffichage + " " + affichage);

                    compteurMot = compteurMot + 1;
                }
                else
                {
                    ui.paroleAffichage->setText(valeurparoleAffichage + '\n' + affichage);
                    compteurMot = 1;
                }

            }
        }
    }
}



