#include "cadlivro.h"
#include "ui_cadlivro.h"
#include "QMessageBox"
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



void CadLivro::on_pushButton_clicked()
{

}


void CadLivro::on_pushButton_2_clicked()
{

}

