#ifndef ADMOPCOES_H
#define ADMOPCOES_H

#include <QDialog>

namespace Ui {
class admOpcoes;
}

class admOpcoes : public QDialog
{
    Q_OBJECT

public:
    explicit admOpcoes(QWidget *parent = nullptr);
    ~admOpcoes();

private slots:
    void on_salvar_clicked();

private:
    Ui::admOpcoes *ui;
};

#endif // ADMOPCOES_H
