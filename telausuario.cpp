#include "telausuario.h"
#include "ui_telausuario.h"
#include "relatoriolivros.h"
#include "selecionarlivro.h"

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


void telaUsuario::on_pushButton_2_clicked()
{
    SelecionarLivro form2;
    form2.exec();
}

