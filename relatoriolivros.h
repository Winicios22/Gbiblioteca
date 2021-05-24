#ifndef RELATORIOLIVROS_H
#define RELATORIOLIVROS_H

#include <QDialog>

namespace Ui {
class RelatorioLivros;
}

class RelatorioLivros : public QDialog
{
    Q_OBJECT

public:
    explicit RelatorioLivros(QWidget *parent = nullptr);
    ~RelatorioLivros();

private slots:
    void on_pushButton_clicked();

private:
    Ui::RelatorioLivros *ui;
};

#endif // RELATORIOLIVROS_H
