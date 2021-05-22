#ifndef CADUSUARIO_H
#define CADUSUARIO_H

#include <QDialog>

namespace Ui {
class CadUsuario;
}

class CadUsuario : public QDialog
{
    Q_OBJECT

public:
    explicit CadUsuario(QWidget *parent = nullptr);
    ~CadUsuario();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CadUsuario *ui;
};

#endif // CADUSUARIO_H
