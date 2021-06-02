#ifndef OPCOES_H
#define OPCOES_H

#include <QDialog>

namespace Ui {
class Opcoes;
}

class Opcoes : public QDialog
{
    Q_OBJECT

public:
    explicit Opcoes(QWidget *parent = nullptr);
    ~Opcoes();

private:
    Ui::Opcoes *ui;
};

#endif // OPCOES_H
