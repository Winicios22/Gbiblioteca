#include "teladepedidos.h"
#include "ui_teladepedidos.h"

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
