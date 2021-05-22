#include "telaadm.h"
#include "ui_telaadm.h"

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
