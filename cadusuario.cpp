#include "cadusuario.h"
#include "ui_cadusuario.h"

CadUsuario::CadUsuario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CadUsuario)
{
    ui->setupUi(this);
}

CadUsuario::~CadUsuario()
{
    delete ui;
}
