#include "telaadm.h"
#include "ui_telaadm.h"
#include "cadlivro.h"

telaADM::telaADM(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telaADM)
{
    ui->setupUi(this);
}

telaADM::~telaADM()
{
    delete ui;
}

void telaADM::on_pushButton_3_clicked()
{
    CadLivro form;
    form.exec();
}

