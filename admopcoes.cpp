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
QString emailadm = "ADM";
QString senhaadm = "123";
void admOpcoes::on_salvar_clicked()
{
    emailadm=ui->campoemail->text();
    senhaadm=ui->camposenha->text();
}

