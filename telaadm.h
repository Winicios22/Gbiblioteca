#ifndef TELAADM_H
#define TELAADM_H

#include <QDialog>

namespace Ui {
class telaADM;
}

class telaADM : public QDialog
{
    Q_OBJECT

public:
    explicit telaADM(QWidget *parent = nullptr);
    ~telaADM();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::telaADM *ui;
};

#endif // TELAADM_H
