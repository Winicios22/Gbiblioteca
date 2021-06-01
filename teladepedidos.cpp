#include "teladepedidos.h"
#include "ui_teladepedidos.h"
#include "selecionarlivro.cpp"

TelaDePedidos::TelaDePedidos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaDePedidos)
{
    ui->setupUi(this);
}

TelaDePedidos::~TelaDePedidos()
{
    delete ui;
}

void TelaDePedidos::on_pushButton_clicked()
{
    QString local="C:/Users/Winicios/Documents/Bear/Bear_Code/Gbiblioteca/arquivos do programa";
    QString nome="Pedidos.txt";
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

