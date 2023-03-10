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

    ui->progressBar->setRange(0,100);
    ui->progressBar->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_richGirl_clicked()
{
    chanson = 1;

    cerr << chanson;

    // LECTURE DU FICHIER AUDIO
    player->setSource(QUrl::fromLocalFile(prefix + "chansons/richGirl.mp3"));
    audio->setVolume(50);
    player->play();

    activerBoutons(*ui);

    // Affichage du titre dans l'ecran
    afficherTitre(ui->richGirl->text().toStdString(), *ui);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->paroleAffichage->clear();
    player->pause();
}

void MainWindow::on_paroles_stateChanged(int arg1)
{
    cerr << arg1;

    string const prefixTraduit = prefix.toStdString();

    if(arg1 == 2)
    {
        ifstream fichier;

        cerr << chanson;
        switch (chanson) {
        case 1:
            fichier.open(prefixTraduit + "paroles/test.txt", ios::in); // OUVVERTURE DU FICHIER TXT OU IL Y A LES PAROLES
            break;
        }


        list<string> listeParoles;
        string parole = " "; // VARIABLE OU IL Y A LES PAROLES

        if(fichier) // SI ON REUSSIT A OUVRIR LE FICHIER TEXT
        {
            cerr << "Fichier ouvert"; // ONAFFICHE DANS LA CONSOLE LA REUSSITE D'OUVERTURE

            ui->paroleAffichage->clear();

            list<string>::iterator it = listeParoles.begin();
            int compteurMot = 0;

            for(string s; fichier >> s;)
            {
                parole = s + ' ';
                //cerr << parole;
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
                    //string valeurparoleAffichage = ui->paroleAffichage->text().toStdString();
                    //cerr << valeurparoleAffichage;
                    QString valeurparoleAffichage = ui->paroleAffichage->text();

                    if(compteurMot < 30)
                    {
                        ui->paroleAffichage->setText(valeurparoleAffichage + " " + affichage);

                        compteurMot = compteurMot + 1;
                    }
                    else
                    {
                        ui->paroleAffichage->setText(valeurparoleAffichage + '\n' + affichage);
                        compteurMot = 1;
                    }

                }
            }
        }

        else
        {
            cerr << "Impossible d'ouvrir le fichier";
        }
    }

    else
    {
        ui->paroleAffichage->clear();
    }
}

void MainWindow::on_pause_clicked() { player->pause() ;}

void MainWindow::on_lecture_clicked(){ player->play(); }

void afficherTitre(string titre, Ui::MainWindow ui)
{
    cerr << "Affichage du titre: " + titre;

    QString titreConverti = QString::fromStdString(titre);
    ui.titre->setText(titreConverti);
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
