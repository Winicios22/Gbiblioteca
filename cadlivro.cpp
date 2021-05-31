#include "cadlivro.h"
#include "ui_cadlivro.h"
#include "QMessageBox"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

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


void CadLivro::on_salvar_clicked()
{
    QString local="C:/Users/Winicios/Documents/Bear/Bear_Code/Gbiblioteca/arquivos do programa";
    QString nome="Livros.txt";
    QFile arquivo(local+nome);
    if(!arquivo.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,"ERRO","Erro ao abrir o arquivo");
    }
    QTextStream saida(&arquivo);
    QString texto=ui->plainTextEdit->toPlainText();
    saida << texto;
    arquivo.flush();
    arquivo.close();
}

