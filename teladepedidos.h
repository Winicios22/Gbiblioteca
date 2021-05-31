#ifndef TELADEPEDIDOS_H
#define TELADEPEDIDOS_H

#include <QDialog>

namespace Ui {
class TelaDePedidos;
}

class TelaDePedidos : public QDialog
{
    Q_OBJECT

public:
    explicit TelaDePedidos(QWidget *parent = nullptr);
    ~TelaDePedidos();

private:
    Ui::TelaDePedidos *ui;
};

#endif // TELADEPEDIDOS_H
