#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "login.h"
#include "cadlivro.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::about(this,"Importante","Função permitida só para administradores");
    CadLivro form;
    form.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::about(this,"Importante","Função permitida só para administradores");
}

void MainWindow::on_pushButton_4_clicked()
{
    Login form;
    form.exec();
}
