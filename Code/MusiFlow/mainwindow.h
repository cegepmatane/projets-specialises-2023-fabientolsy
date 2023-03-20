#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>

#include <QAudioOutput>

#include <QFileDialog>
#include <QProgressBar>
#include <QSlider>

#include <QVideoWidget>

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

private:
    Ui::MainWindow *ui;

    QMediaPlayer* player;

    QAudioOutput* audio;

    QProgressBar* bar;
    QSlider* slider;

    QVideoWidget* vw;

    QString const prefix = "../MusiFlow/";

    std::string titreBouton;

};

void lectureMusique(QString titre, QString prefix, QMediaPlayer* player, QAudioOutput* audio);
void afficherTitre(std::string titre, Ui::MainWindow ui);
void afficherParoles(std::string titre, Ui::MainWindow, std::string prefix);
void afficherParolesTraduites(std::string titre, Ui::MainWindow ui, QString prefix);
void changementChanson(Ui::MainWindow ui);
void activerBoutons(Ui::MainWindow ui);
void desactiverBouton(Ui::MainWindow ui);

#endif // MAINWINDOW_H
