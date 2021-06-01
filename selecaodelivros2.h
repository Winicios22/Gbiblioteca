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

private:
    Ui::SelecaoDeLivros2 *ui;
};

#endif // SELECAODELIVROS2_H
