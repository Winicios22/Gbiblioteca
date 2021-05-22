#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "telaADM.h"
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
        telaADM form;
        form.exec();
    }
    if(email == emailUsuario && senha == senhaUsuario){
        telaUsuario form3;
        form3.exec();
    }else{
        QMessageBox::warning(this,"Login", "invaido");
    }
}


void MainWindow::on_commandLinkButton_clicked()
{
    CadUsuario form2;
    form2.exec();
}

