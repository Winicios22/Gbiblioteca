#include "selecaodelivros2.h"
#include "ui_selecaodelivros2.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

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

void SelecaoDeLivros2::on_atualizarLivros_clicked()
{
    QString local="C:/Users/Winicios/Documents/Bear/Bear_Code/Gbiblioteca/arquivos do programa";
    QString nome="Livros.txt";
    QFile arquivo(local+nome);
    if(!arquivo.open(QFile::ReadOnly|QFile::Text)){
        QMessageBox::warning(this,"ERRO","Erro ao abrir o arquivo");
    }
    QTextStream saida(&arquivo);
    QString texto=saida.readAll();
    ui->telaLivros->setPlainText(texto);
    arquivo.flush();
    arquivo.close();
}


void SelecaoDeLivros2::on_atualizarPedidos_clicked()
{
    QString local="C:/Users/Winicios/Documents/Bear/Bear_Code/Gbiblioteca/arquivos do programa";
    QString nome="Pedidos.txt";
    QFile arquivo(local+nome);
    if(!arquivo.open(QFile::ReadOnly|QFile::Text)){
        QMessageBox::warning(this,"ERRO","Erro ao abrir o arquivo");
    }
    QTextStream saida(&arquivo);
    QString texto=saida.readAll();
    ui->telaPedidos->setPlainText(texto);
    arquivo.flush();
    arquivo.close();
}


void SelecaoDeLivros2::on_registrarPedido_clicked()
{
    QString local="C:/Users/Winicios/Documents/Bear/Bear_Code/Gbiblioteca/arquivos do programa";
    QString nome="Pedidos.txt";
    QFile arquivo(local+nome);
    if(!arquivo.open(QFile::Append|QFile::Text)){
        QMessageBox::warning(this,"ERRO","Erro ao abrir o arquivo");
    }
    QTextStream saida(&arquivo);
    QString texto=ui->telaPedidos->toPlainText();
    saida << texto;
    arquivo.flush();
    arquivo.close();
}

