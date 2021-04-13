#include "cadlivro.h"
#include "ui_cadlivro.h"

CadLivro::CadLivro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CadLivro)
{
    ui->setupUi(this);
}

CadLivro::~CadLivro()
{
    delete ui;
}
