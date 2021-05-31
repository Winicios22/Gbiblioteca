#include "selecionarlivro.h"
#include "ui_selecionarlivro.h"

SelecionarLivro::SelecionarLivro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelecionarLivro)
{
    ui->setupUi(this);
}

SelecionarLivro::~SelecionarLivro()
{
    delete ui;
}
