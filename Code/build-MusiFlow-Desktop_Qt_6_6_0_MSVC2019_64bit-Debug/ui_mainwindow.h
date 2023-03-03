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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *richGirl;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pause;
    QPushButton *lecture;
    QProgressBar *progressBar;
    QCheckBox *paroles;
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
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setEnabled(true);
        label->setGeometry(QRect(140, 80, 1161, 741));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(10, 70, 111, 51));
        pause = new QPushButton(centralwidget);
        pause->setObjectName("pause");
        pause->setEnabled(false);
        pause->setGeometry(QRect(290, 10, 83, 29));
        lecture = new QPushButton(centralwidget);
        lecture->setObjectName("lecture");
        lecture->setEnabled(false);
        lecture->setGeometry(QRect(390, 10, 83, 29));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setEnabled(false);
        progressBar->setGeometry(QRect(490, 10, 451, 23));
        progressBar->setValue(24);
        paroles = new QCheckBox(centralwidget);
        paroles->setObjectName("paroles");
        paroles->setGeometry(QRect(190, 10, 93, 26));
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        richGirl->raise();
        pushButton_2->raise();
        pause->raise();
        lecture->raise();
        progressBar->raise();
        paroles->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1327, 21));
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
        label->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Hide", nullptr));
        pause->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        lecture->setText(QCoreApplication::translate("MainWindow", "Lecture", nullptr));
        paroles->setText(QCoreApplication::translate("MainWindow", "Paroles", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
