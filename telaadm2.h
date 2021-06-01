#ifndef TELAADM2_H
#define TELAADM2_H

#include <QDialog>

namespace Ui {
class TelaAdm2;
}

class TelaAdm2 : public QDialog
{
    Q_OBJECT

public:
    explicit TelaAdm2(QWidget *parent = nullptr);
    ~TelaAdm2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::TelaAdm2 *ui;
};

#endif // TELAADM2_H
