#include "teladepedidos.h"
#include "ui_teladepedidos.h"
#include "selecionarlivro.cpp"

TelaDePedidos::TelaDePedidos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaDePedidos)
{
    ui->setupUi(this);
}

TelaDePedidos::~TelaDePedidos()
{
    delete ui;
}

void TelaDePedidos::on_pushButton_clicked()
{
    QString nomeDoLivro;

}

