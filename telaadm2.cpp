#include "telaadm2.h"
#include "ui_telaadm2.h"
#include "cadlivro.h"
#include "teladepedidos.h"

TelaAdm2::TelaAdm2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaAdm2)
{
    ui->setupUi(this);
}

TelaAdm2::~TelaAdm2()
{
    delete ui;
}

void TelaAdm2::on_pushButton_clicked()
{
    CadLivro form;
    form.exec();
}


void TelaAdm2::on_pushButton_2_clicked()
{
    TelaDePedidos form2;
    form2.exec();
}

