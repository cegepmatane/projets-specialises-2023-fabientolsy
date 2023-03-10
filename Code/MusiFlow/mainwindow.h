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

    void on_pushButton_2_clicked();

    void on_paroles_stateChanged(int arg1);

    void on_pause_clicked();

    void on_lecture_clicked();



private:
    Ui::MainWindow *ui;

    QMediaPlayer* player;

    QAudioOutput* audio;

    QProgressBar* bar;
    QSlider* slider;

    QVideoWidget* vw;

    int chanson;

    QString const prefix = "../MusiFlow/";

};

void afficherTitre();

#endif // MAINWINDOW_H
