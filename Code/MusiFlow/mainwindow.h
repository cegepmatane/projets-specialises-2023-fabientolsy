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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

    QMediaPlayer* player;

    QAudioOutput* audio;

    QProgressBar* bar;
    QSlider* slider;

    QVideoWidget* vw;

};
#endif // MAINWINDOW_H
