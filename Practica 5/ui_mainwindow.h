/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbrir;
    QAction *actionGuardar;
    QAction *actionOpne;
    QAction *actionSave;
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QPushButton *Captura;
    QSpinBox *Id;
    QSpinBox *Posicionx;
    QSpinBox *PosicionY;
    QDoubleSpinBox *Voltaje;
    QSpinBox *red;
    QSpinBox *green;
    QSpinBox *blue;
    QLabel *res;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuArchivo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName("Abrir");
        actionGuardar = new QAction(MainWindow);
        actionGuardar->setObjectName("Guardarr");
        actionOpne = new QAction(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(120, 0, 521, 394));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("Edit");
        lineEdit->setGeometry(QRect(10, 40, 113, 24));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("Edit_2");
        lineEdit_2->setGeometry(QRect(10, 80, 113, 24));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName("Edit_3");
        lineEdit_3->setGeometry(QRect(10, 120, 113, 24));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName("Edit_4");
        lineEdit_4->setGeometry(QRect(10, 160, 113, 24));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName("Edit_5");
        lineEdit_5->setGeometry(QRect(10, 200, 113, 24));
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName("Edit_6");
        lineEdit_6->setGeometry(QRect(10, 240, 113, 24));
        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName("Edit_7");
        lineEdit_7->setGeometry(QRect(10, 290, 113, 24));
        Captura = new QPushButton(groupBox);
        Captura->setObjectName("Captura");
        Captura->setEnabled(true);
        Captura->setGeometry(QRect(80, 350, 80, 24));
        Captura->setMouseTracking(false);
#if QT_CONFIG(accessibility)
        Captura->setAccessibleDescription(QString::fromUtf8(""));
#endif // QT_CONFIG(accessibility)
        Captura->setCheckable(true);
        Id = new QSpinBox(groupBox);
        Id->setObjectName("Id");
        Id->setGeometry(QRect(190, 40, 42, 25));
        Posicionx = new QSpinBox(groupBox);
        Posicionx->setObjectName("Posicionx");
        Posicionx->setGeometry(QRect(190, 120, 42, 25));
        PosicionY = new QSpinBox(groupBox);
        PosicionY->setObjectName("PosicionY");
        PosicionY->setGeometry(QRect(190, 160, 42, 25));
        Voltaje = new QDoubleSpinBox(groupBox);
        Voltaje->setObjectName("Voltaje");
        Voltaje->setGeometry(QRect(170, 80, 62, 25));
        red = new QSpinBox(groupBox);
        red->setObjectName("red");
        red->setGeometry(QRect(190, 200, 42, 25));
        green = new QSpinBox(groupBox);
        green->setObjectName("green");
        green->setGeometry(QRect(190, 240, 42, 25));
        blue = new QSpinBox(groupBox);
        blue->setObjectName("blue");
        blue->setGeometry(QRect(190, 290, 42, 25));
        res = new QLabel(groupBox);
        res->setObjectName("res");
        res->setGeometry(QRect(280, 40, 191, 271));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName("menuArchivo");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuArchivo->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionAbrir);
        menuFile->addAction(actionGuardar);
        menuArchivo->addSeparator();
        menuArchivo->addSeparator();
        menuArchivo->addSeparator();
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionOpne);
        menuArchivo->addAction(actionSave);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        actionGuardar->setText(QCoreApplication::translate("MainWindow", "Guardar", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "UI - Neuronas", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "Voltaje", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MainWindow", "Posicion_X", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("MainWindow", "Posicion_Y", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("MainWindow", "RED", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("MainWindow", "GREEN", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("MainWindow", "BLUE", nullptr));
        Captura->setText(QCoreApplication::translate("MainWindow", "Capturar", nullptr));
        res->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("MainWindow", "Archivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
}

QT_END_NAMESPACE

#endif
