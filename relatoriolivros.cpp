#include "relatoriolivros.h"
#include "ui_relatoriolivros.h"

RelatorioLivros::RelatorioLivros(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RelatorioLivros)
{
    ui->setupUi(this);
}

RelatorioLivros::~RelatorioLivros()
{
    delete ui;
}

void RelatorioLivros::on_pushButton_clicked()
{
    QListWidgetItem *winicios = new QListWidgetItem("winicios");

    ui->listWidget->addItem(winicios);
}

