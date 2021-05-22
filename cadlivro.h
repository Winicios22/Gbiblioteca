#ifndef CADLIVRO_H
#define CADLIVRO_H

#include <QDialog>

namespace Ui {
class CadLivro;
}

class CadLivro : public QDialog
{
    Q_OBJECT

public:
    explicit CadLivro(QWidget *parent = nullptr);
    ~CadLivro();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::CadLivro *ui;
};

#endif // CADLIVRO_H
