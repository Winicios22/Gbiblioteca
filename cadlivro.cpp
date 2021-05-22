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
    QString nomeLivro = ui->campoNomeDoLivro->text();
    QString nomeAutor = ui->campoNomeDoAutor->text();
    QString nomeEdicao = ui->campoEdicao->text();

    QMessageBox::information(this,"Dados cadastrados com sucesso \n", "Informaçoes salvas:\n Nome do livro: "+nomeLivro+" \n Nome do autor: "+nomeAutor+"\n Edição do livro: "+nomeEdicao);
}

