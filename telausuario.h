#ifndef TELAUSUARIO_H
#define TELAUSUARIO_H

#include <QDialog>

namespace Ui {
class telaUsuario;
}

class telaUsuario : public QDialog
{
    Q_OBJECT

public:
    explicit telaUsuario(QWidget *parent = nullptr);
    ~telaUsuario();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::telaUsuario *ui;
};

#endif // TELAUSUARIO_H
