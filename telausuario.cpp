#include "telausuario.h"
#include "ui_telausuario.h"

telaUsuario::telaUsuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telaUsuario)
{
    ui->setupUi(this);
}

telaUsuario::~telaUsuario()
{
    delete ui;
}
