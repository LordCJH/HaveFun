#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMovie>
#include <QTimer>
#include <QString>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

    QMovie *movie;
    QMovie *tishi_movie;
    int timerId;
    int unlock_skill_timerId;
    int dance_timerId;
    int bathe_timerId;
    int pwf_timerId;

    QIcon *on_volumn;
    QIcon *off_volumn;

    void timerEvent(QTimerEvent *event);


private slots:
    void on_seed_food_clicked();

    void on_exit_clicked();


    void on_volumn_switch_clicked();

    void on_jinjie_clicked();


    void on_dance_clicked();

    void on_bathe_clicked();

    void on_pwf_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
