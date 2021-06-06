#include "admopcoes.h"
#include "ui_admopcoes.h"

admOpcoes::admOpcoes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admOpcoes)
{
    ui->setupUi(this);
}

admOpcoes::~admOpcoes()
{
    delete ui;
}
