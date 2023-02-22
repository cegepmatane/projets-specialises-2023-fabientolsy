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

    //vw = new QVideoWidget(this);
    //player->setVideoOutput(vw);
    //this->setCentralWidget(vw);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    // LECTURE DU FICHIER AUDIO

    ui->label->setText("Hello Word !");

    /*QString fichier = "D:/GitHub/projets-specialises-2023-fabientolsy/Code/MusiFlow/test.mp3";
    printf("QString \n");
    player->setSource(QUrl::fromLocalFile(fichier));
    player->set
    printf("setSource \n");
    player->play();
    printf("play \n");*/

    player->setSource(QUrl::fromLocalFile("D:/GitHub/projets-specialises-2023-fabientolsy/Code/MusiFlow/test.mp3")); // LIGNE FONCTIONNELLE
    audio->setVolume(50);
    player->play();

    // AFFICHAGE DES PAROLES
    ifstream fichier("D:/GitHub/projets-specialises-2023-fabientolsy/Code/MusiFlow/paroles/test.txt", ios::in); // OUVVERTURE DU FICHIER TXT OU IL Y A LES PAROLES

    string chaine1 = " "; // VARIABLE OU IL Y A LES PAROLES

    if(fichier) // SI ON REUSSIT A OUVRIR LE FICHIER TEXT
    {
        cerr << "Fichier ouvert"; // ONAFFICHE DANS LA CONSOLE LA REUSSITE D'OUVERTURE

        fichier >> chaine1;
        /**
         * ECRIT COMME CA, CA PERMET DE METTRE UNIQUEMENT LE PREMIER BLOC DE TEXTE DU FICHIER DANS LA VARIABLE
         * CE QUE J'APPELLE BLOC EST TOUT LE TEXTE JUSQU'QU PREMIER ESPACE
         * */

        QString chaineTest = QString::fromStdString(chaine1); // ON CONVERTI LA VARIABLE OU IL Y A LE TEXTE EN VARTIABLE POUVANT ETRE AFFICHER DANS LE CLIENT
        ui->label->clear(); // ON S'ASSURE QUE LA ZONE DE TEXTE SOIT VIDE

        ui->label->setText(chaineTest); // ON AFFICHE LES PAROLES RECUES
    }

    else
    {
        cerr << "Impossible d'ouvrir le fichier";
    }

}


void MainWindow::on_pushButton_2_clicked()
{
    ui->label->clear();
    player->pause();
}



