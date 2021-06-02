#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "telaadm2.h"
#include "cadusuario.h"
#include "cadusuario.cpp"
#include "telausuario.h"

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




void MainWindow::on_botaoLogin_clicked()
{
    QString email = ui->campoEmail->text();
    QString senha = ui->campoSenha->text();

    if(email == "ADM" && senha == "123"){
        TelaAdm2 form;
        form.exec();
    }else{
        QMessageBox::warning(this,"Login", "invaido");
    }
}


void MainWindow::on_commandLinkButton_clicked()
{
    telaUsuario form3;
    form3.exec();
}

