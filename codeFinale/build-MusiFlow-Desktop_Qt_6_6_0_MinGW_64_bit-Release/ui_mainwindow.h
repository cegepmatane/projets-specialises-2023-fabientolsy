/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *richGirl;
    QLabel *paroleAffichage;
    QPushButton *cantHoldUs;
    QPushButton *pause;
    QPushButton *lecture;
    QCheckBox *paroles;
    QLabel *titre;
    QSlider *horizontalSlider;
    QCheckBox *traduireParoles;
    QPushButton *onVerra;
    QPushButton *astronaute;
    QPushButton *superman;
    QProgressBar *progressBar;
    QLabel *pochette;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1327, 876);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        richGirl = new QPushButton(centralwidget);
        richGirl->setObjectName("richGirl");
        richGirl->setGeometry(QRect(10, 10, 111, 51));
        paroleAffichage = new QLabel(centralwidget);
        paroleAffichage->setObjectName("paroleAffichage");
        paroleAffichage->setEnabled(true);
        paroleAffichage->setGeometry(QRect(200, 80, 1101, 741));
        paroleAffichage->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        cantHoldUs = new QPushButton(centralwidget);
        cantHoldUs->setObjectName("cantHoldUs");
        cantHoldUs->setGeometry(QRect(10, 70, 111, 51));
        pause = new QPushButton(centralwidget);
        pause->setObjectName("pause");
        pause->setEnabled(false);
        pause->setGeometry(QRect(380, 10, 83, 29));
        lecture = new QPushButton(centralwidget);
        lecture->setObjectName("lecture");
        lecture->setEnabled(false);
        lecture->setGeometry(QRect(480, 10, 83, 29));
        paroles = new QCheckBox(centralwidget);
        paroles->setObjectName("paroles");
        paroles->setEnabled(false);
        paroles->setGeometry(QRect(190, 10, 93, 26));
        titre = new QLabel(centralwidget);
        titre->setObjectName("titre");
        titre->setEnabled(false);
        titre->setGeometry(QRect(570, 10, 151, 31));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(830, 40, 411, 20));
        horizontalSlider->setOrientation(Qt::Horizontal);
        traduireParoles = new QCheckBox(centralwidget);
        traduireParoles->setObjectName("traduireParoles");
        traduireParoles->setEnabled(false);
        traduireParoles->setGeometry(QRect(280, 10, 93, 26));
        traduireParoles->setMouseTracking(false);
        traduireParoles->setChecked(false);
        onVerra = new QPushButton(centralwidget);
        onVerra->setObjectName("onVerra");
        onVerra->setGeometry(QRect(10, 130, 111, 51));
        astronaute = new QPushButton(centralwidget);
        astronaute->setObjectName("astronaute");
        astronaute->setGeometry(QRect(10, 190, 111, 51));
        superman = new QPushButton(centralwidget);
        superman->setObjectName("superman");
        superman->setGeometry(QRect(10, 250, 111, 51));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(837, 10, 441, 23));
        progressBar->setValue(24);
        pochette = new QLabel(centralwidget);
        pochette->setObjectName("pochette");
        pochette->setGeometry(QRect(10, 400, 131, 131));
        MainWindow->setCentralWidget(centralwidget);
        paroleAffichage->raise();
        richGirl->raise();
        cantHoldUs->raise();
        pause->raise();
        lecture->raise();
        paroles->raise();
        titre->raise();
        horizontalSlider->raise();
        traduireParoles->raise();
        onVerra->raise();
        astronaute->raise();
        superman->raise();
        progressBar->raise();
        pochette->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1327, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        richGirl->setText(QCoreApplication::translate("MainWindow", "Rich Girl", nullptr));
        paroleAffichage->setText(QString());
        cantHoldUs->setText(QCoreApplication::translate("MainWindow", "Can't Hold Us", nullptr));
        pause->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        lecture->setText(QCoreApplication::translate("MainWindow", "Lecture", nullptr));
        paroles->setText(QCoreApplication::translate("MainWindow", "Paroles", nullptr));
        titre->setText(QString());
        traduireParoles->setText(QCoreApplication::translate("MainWindow", "Traduire", nullptr));
        onVerra->setText(QCoreApplication::translate("MainWindow", "On verra", nullptr));
        astronaute->setText(QCoreApplication::translate("MainWindow", "Astronaute", nullptr));
        superman->setText(QCoreApplication::translate("MainWindow", "Superman", nullptr));
        pochette->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
