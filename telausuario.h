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

private:
    Ui::telaUsuario *ui;
};

#endif // TELAUSUARIO_H
