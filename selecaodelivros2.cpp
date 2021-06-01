#include "selecaodelivros2.h"
#include "ui_selecaodelivros2.h"

SelecaoDeLivros2::SelecaoDeLivros2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelecaoDeLivros2)
{
    ui->setupUi(this);
}

SelecaoDeLivros2::~SelecaoDeLivros2()
{
    delete ui;
}
