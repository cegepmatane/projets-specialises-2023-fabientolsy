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

    ifstream fichier("D:/GitHub/projets-specialises-2023-fabientolsy/Code/MusiFlow/paroles/test.txt", ios::in);

    string chaine1 = " ";

    if(fichier)
    {
        cerr << "Fichier ouvert";

        fichier >> chaine1;

        QString chaineTest = QString::fromStdString(chaine1);

        ui->label->clear();

        ui->label->setText(chaineTest);
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



