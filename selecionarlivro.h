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

private:
    Ui::SelecionarLivro *ui;
};

#endif // SELECIONARLIVRO_H
