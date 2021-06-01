#ifndef SELECIONARLIVRO_H
#define SELECIONARLIVRO_H

#include <QDialog>

namespace Ui {
class SelecionarLivro;
}

class SelecionarLivro : public QDialog
{
    Q_OBJECT

public:
    explicit SelecionarLivro(QWidget *parent = nullptr);
    ~SelecionarLivro();

private slots:
    void on_pushButton_2_clicked();

    void on_salvar_clicked();

    void on_pushButton_clicked();

    void on_atualizarListaPedidos_clicked();

private:
    Ui::SelecionarLivro *ui;
};

#endif // SELECIONARLIVRO_H
