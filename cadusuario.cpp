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

QString emailUsuario;
QString senhaUsuario;

void CadUsuario::on_pushButton_clicked()
{
    QString nomeUsuario = ui->nomeUsuario->text();
    QString enderecoUsuario = ui->enderecoUsuario->text();
    emailUsuario = ui->emailUsuario->text();
    QString numeroUsuario = ui->bumeroDaCasa->text();
    senhaUsuario = ui->SenhaUsuario->text();

}

