#ifndef CALCUL_H
#define CALCUL_H

#include <QMainWindow>

namespace Ui {
class calcul;
}

class calcul : public QMainWindow
{
    Q_OBJECT

public:
    explicit calcul(QWidget *parent = 0);
    ~calcul();
    void pushB(QWidget *parent = 0);

private slots:
    void on_pushButton_result_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_C_clicked();

    void on_pushButton_addition_clicked();

    void on_pushButton_subtract_clicked();

    void on_pushButton_multiply_clicked();

    void on_pushButton_divide_clicked();

private:
    Ui::calcul *ui;

    unsigned int operation;
    QString a, b, result;
    double A, B, res;
};

#endif // CALCUL_H
