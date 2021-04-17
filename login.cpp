#include "login.h"
#include "ui_login.h"
#include "cadusuario.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButton_clicked()
{

}

void Login::on_commandLinkButton_clicked()
{
    CadUsuario form;
    form.exec();

}
