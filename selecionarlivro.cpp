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

QString nomeDoLivro;

void SelecionarLivro::on_salvar_clicked()
{
    nomeDoLivro = ui->campoomeLivro->text();
}

