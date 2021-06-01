#include "selecionarlivro.h"
#include "ui_selecionarlivro.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

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

void SelecionarLivro::on_pushButton_2_clicked()
{
    QString local="C:/Users/Winicios/Documents/Bear/Bear_Code/Gbiblioteca/arquivos do programa";
    QString nome="Livros.txt";
    QFile arquivo(local+nome);
    if(!arquivo.open(QFile::ReadOnly|QFile::Text)){
        QMessageBox::warning(this,"ERRO","Erro ao abrir o arquivo");
    }
    QTextStream saida(&arquivo);
    QString texto=saida.readAll();
    ui->plainTextEdit->setPlainText(texto);
    arquivo.flush();
    arquivo.close();
}

void SelecionarLivro::on_salvar_clicked()
{
    QString local2="C:/Users/Winicios/Documents/Bear/Bear_Code/Gbiblioteca/arquivos do programa";
    QString nome2="Pedidos.txt";
    QFile arquivo2(local2+nome2);
    if(!arquivo2.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"ERRO","Erro ao abrir o arquivo");
    }
    QTextStream saida2(&arquivo2);
    QString texto2=ui->plainTextEdit_2->toPlainText();
    saida2 << texto2;
    arquivo2.flush();
    arquivo2.close();
}

