#include "telausuario.h"
#include "ui_telausuario.h"
#include "relatoriolivros.h"

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

void telaUsuario::on_pushButton_3_clicked()
{
    RelatorioLivros form;
    form.exec();
}

