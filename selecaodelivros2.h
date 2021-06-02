#ifndef SELECAODELIVROS2_H
#define SELECAODELIVROS2_H

#include <QDialog>

namespace Ui {
class SelecaoDeLivros2;
}

class SelecaoDeLivros2 : public QDialog
{
    Q_OBJECT

public:
    explicit SelecaoDeLivros2(QWidget *parent = nullptr);
    ~SelecaoDeLivros2();

private slots:
    void on_atualizarLivros_clicked();

    void on_atualizarPedidos_clicked();

    void on_registrarPedido_clicked();

private:
    Ui::SelecaoDeLivros2 *ui;
};

#endif // SELECAODELIVROS2_H
