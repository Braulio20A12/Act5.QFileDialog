#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <qfiledialog.h> 
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Neuronas");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Captura_clicked()
{
    qDebug() << "ID: \n";
    ui->res->setText(QString::number(ui->Id->value()));
    qDebug() << "Voltaje: \n";
    ui->res->setText(QString::number(ui->Voltaje->value()));
    qDebug() << "Posicion X: \n";
    ui->res->setText(QString::number(ui->Posicionx->value()));
    qDebug() << "Posicion Y: \n";
    ui->res->setText(QString::number(ui->PosicionY->value()));
    qDebug() << "RED: \n";
    ui->res->setText(QString::number(ui->red->value()));
    qDebug() << "GREEN: \n";
    ui->res->setText(QString::number(ui->green->value()));
    qDebug() << "BLUE: \n";
    ui->res->setText(QString::number(ui->blue->value()));
}



void MainWindow::on_actionAbrir_triggered()
{
    std::cout<<"Abrir"<<std::endl;
    QString Filename= QFileDialog::getOpenFileName(this, "Abrir archivo", ".", "imagenes (*.jpg)");
    std::string file= Filename.toStdString();
    std::cout<<file<<std::endl;
}


void MainWindow::on_actionGuardar_triggered()
{
    std::cout<<"Guardar"<<std::endl;
    QString Filename= QFileDialog::getOpenFileName(this, "Guardar archivo", ".", "imagenes (*.jpg)");
    std::string file= Filename.toStdString();
    std::cout<<file<<std::endl;
}


