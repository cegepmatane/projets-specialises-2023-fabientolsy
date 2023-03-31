#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QWidget>
#include <QtMultimedia>
#include <QObject>
#include <QMediaPlayer>
#include <QMenuBar>

#include <QAbstractSlider>

#include <QAudioOutput>
#include <QSoundEffect>>
#include <QFileDialog>

#include <QSlider>
#include <QProgressBar>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_richGirl_clicked();

    void on_paroles_stateChanged(int arg1);

    void on_pause_clicked();

    void on_lecture_clicked();

    void on_horizontalSlider_sliderMoved(int position);

    void on_traduireParoles_stateChanged(int arg1);

    void on_cantHoldUs_clicked();

    void on_onVerra_clicked();

    void on_astronaute_clicked();

    void on_superman_clicked();

private:
    Ui::MainWindow *ui;

    QMediaPlayer* player;

    QAudioOutput* audio;

    QProgressBar* bar;

    QSlider* slider;

    std::string titreBouton;

};

void lectureMusique(QString titre,  QMediaPlayer* player, QAudioOutput* audio);
void afficherTitre(std::string titre, Ui::MainWindow ui);
void afficherParoles(std::string titre, Ui::MainWindow ui);
void afficherParolesTraduites(std::string titre, Ui::MainWindow ui);
void changementChanson(Ui::MainWindow ui);
void activerBoutons(Ui::MainWindow ui);
void desactiverBouton(Ui::MainWindow ui);

#endif // MAINWINDOW_H
