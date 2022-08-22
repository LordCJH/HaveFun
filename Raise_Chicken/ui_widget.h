/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QPushButton *seed_food;
    QPushButton *exit;
    QLabel *kunkun_name;
    QProgressBar *kunkun_growup_value;
    QLabel *label_4;
    QLabel *kunkun_level;
    QLabel *label_5;
    QLabel *tishi;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *volumn_switch;
    QLabel *jinhua_label;
    QLabel *kunkun_stage;
    QLabel *label_6;
    QPushButton *jinjie;
    QPushButton *dance;
    QLabel *tiaowu_tishi;
    QLabel *weishi_tishi;
    QPushButton *bathe;
    QPushButton *pwf;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1381, 918);
        QFont font;
        font.setPointSize(11);
        Widget->setFont(font);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 40, 821, 701));
        label->setStyleSheet(QString::fromUtf8("border:6px solid black;\n"
"border-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));
        label->setFrameShape(QFrame::WinPanel);
        label->setFrameShadow(QFrame::Plain);
        seed_food = new QPushButton(Widget);
        seed_food->setObjectName(QString::fromUtf8("seed_food"));
        seed_food->setGeometry(QRect(930, 550, 141, 71));
        QFont font1;
        font1.setPointSize(20);
        seed_food->setFont(font1);
        seed_food->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	border:3px solid black;\n"
"	background-color:rgba(105, 150, 205, 200);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:rgba(85, 170, 255, 200);\n"
"}"));
        exit = new QPushButton(Widget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(1200, 780, 151, 61));
        exit->setFont(font1);
        exit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(239, 41, 41);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	border:3px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:rgba(85, 170, 255, 200);\n"
"}"));
        kunkun_name = new QLabel(Widget);
        kunkun_name->setObjectName(QString::fromUtf8("kunkun_name"));
        kunkun_name->setGeometry(QRect(1020, 30, 251, 81));
        QFont font2;
        font2.setPointSize(30);
        kunkun_name->setFont(font2);
        kunkun_name->setLayoutDirection(Qt::LeftToRight);
        kunkun_name->setAlignment(Qt::AlignCenter);
        kunkun_growup_value = new QProgressBar(Widget);
        kunkun_growup_value->setObjectName(QString::fromUtf8("kunkun_growup_value"));
        kunkun_growup_value->setGeometry(QRect(1040, 230, 221, 21));
        QFont font3;
        font3.setPointSize(15);
        kunkun_growup_value->setFont(font3);
        kunkun_growup_value->setStyleSheet(QString::fromUtf8(""));
        kunkun_growup_value->setValue(0);
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(980, 190, 51, 21));
        label_4->setFont(font3);
        kunkun_level = new QLabel(Widget);
        kunkun_level->setObjectName(QString::fromUtf8("kunkun_level"));
        kunkun_level->setGeometry(QRect(1040, 190, 21, 21));
        kunkun_level->setFont(font3);
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(960, 230, 71, 20));
        label_5->setFont(font3);
        tishi = new QLabel(Widget);
        tishi->setObjectName(QString::fromUtf8("tishi"));
        tishi->setGeometry(QRect(1220, 20, 151, 141));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Tlwg Typist"));
        font4.setPointSize(50);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        tishi->setFont(font4);
        tishi->setStyleSheet(QString::fromUtf8("image: url(:/pic/shengji0.png);\n"
"color: rgb(239, 41, 41);\n"
"\n"
""));
        tishi->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1290, 890, 61, 21));
        label_3->setFont(font);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1350, 890, 21, 21));
        label_2->setFont(font);
        volumn_switch = new QPushButton(Widget);
        volumn_switch->setObjectName(QString::fromUtf8("volumn_switch"));
        volumn_switch->setGeometry(QRect(755, 605, 131, 131));
        volumn_switch->setFont(font);
        volumn_switch->setStyleSheet(QString::fromUtf8(""));
        jinhua_label = new QLabel(Widget);
        jinhua_label->setObjectName(QString::fromUtf8("jinhua_label"));
        jinhua_label->setGeometry(QRect(1280, 230, 67, 21));
        QFont font5;
        font5.setPointSize(15);
        font5.setBold(true);
        font5.setWeight(75);
        jinhua_label->setFont(font5);
        jinhua_label->setStyleSheet(QString::fromUtf8("color: rgb(239, 41, 41);"));
        kunkun_stage = new QLabel(Widget);
        kunkun_stage->setObjectName(QString::fromUtf8("kunkun_stage"));
        kunkun_stage->setGeometry(QRect(1040, 150, 121, 21));
        kunkun_stage->setFont(font3);
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(980, 150, 51, 21));
        label_6->setFont(font3);
        jinjie = new QPushButton(Widget);
        jinjie->setObjectName(QString::fromUtf8("jinjie"));
        jinjie->setGeometry(QRect(1080, 300, 101, 51));
        jinjie->setFont(font1);
        jinjie->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	\n"
"	\n"
"	background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	border:1px solid black;\n"
"	background-color:rgba(105, 150, 205, 200);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:rgba(85, 170, 255, 200);\n"
"}"));
        dance = new QPushButton(Widget);
        dance->setObjectName(QString::fromUtf8("dance"));
        dance->setGeometry(QRect(1230, 550, 141, 71));
        dance->setFont(font1);
        dance->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	border:3px solid black;\n"
"	background-color:rgba(105, 150, 205, 200);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:rgba(85, 170, 255, 200);\n"
"}"));
        tiaowu_tishi = new QLabel(Widget);
        tiaowu_tishi->setObjectName(QString::fromUtf8("tiaowu_tishi"));
        tiaowu_tishi->setGeometry(QRect(1100, 460, 221, 81));
        tiaowu_tishi->setFont(font1);
        weishi_tishi = new QLabel(Widget);
        weishi_tishi->setObjectName(QString::fromUtf8("weishi_tishi"));
        weishi_tishi->setGeometry(QRect(940, 460, 291, 81));
        weishi_tishi->setFont(font1);
        bathe = new QPushButton(Widget);
        bathe->setObjectName(QString::fromUtf8("bathe"));
        bathe->setGeometry(QRect(1080, 550, 141, 71));
        bathe->setFont(font1);
        bathe->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	border:3px solid black;\n"
"	background-color:rgba(105, 150, 205, 200);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:rgba(85, 170, 255, 200);\n"
"}"));
        pwf = new QPushButton(Widget);
        pwf->setObjectName(QString::fromUtf8("pwf"));
        pwf->setGeometry(QRect(930, 650, 141, 71));
        pwf->setFont(font1);
        pwf->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	border:3px solid black;\n"
"	background-color:rgba(105, 150, 205, 200);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color:rgba(85, 170, 255, 200);\n"
"}"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QString());
        seed_food->setText(QApplication::translate("Widget", "\345\226\202\351\243\237", nullptr));
        exit->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        kunkun_name->setText(QApplication::translate("Widget", "\345\235\244\345\235\244\346\210\220\351\225\277\351\230\266\346\256\265", nullptr));
        label_4->setText(QApplication::translate("Widget", "\347\255\211\347\272\247:", nullptr));
        kunkun_level->setText(QApplication::translate("Widget", "0", nullptr));
        label_5->setText(QApplication::translate("Widget", "\346\210\220\351\225\277\345\200\274:", nullptr));
        tishi->setText(QString());
        label_3->setText(QApplication::translate("Widget", "\347\211\210\346\234\254\345\217\267:", nullptr));
        label_2->setText(QApplication::translate("Widget", "1.0", nullptr));
        volumn_switch->setText(QString());
        jinhua_label->setText(QString());
        kunkun_stage->setText(QApplication::translate("Widget", "1\357\274\210\345\260\217\351\273\204\351\270\241\357\274\211", nullptr));
        label_6->setText(QApplication::translate("Widget", "\351\230\266\346\256\265:", nullptr));
        jinjie->setText(QApplication::translate("Widget", "\350\277\233\351\230\266", nullptr));
        dance->setText(QApplication::translate("Widget", "\350\267\263\350\210\236", nullptr));
        tiaowu_tishi->setText(QApplication::translate("Widget", "\350\247\243\351\224\201\346\226\260\345\212\237\350\203\275\357\274\232\350\267\263\350\210\236", nullptr));
        weishi_tishi->setText(QApplication::translate("Widget", "\347\202\271\345\207\273\345\226\202\351\243\237\346\235\245\350\277\233\350\241\214\351\245\262\345\205\273", nullptr));
        bathe->setText(QApplication::translate("Widget", "\346\264\227\346\276\241", nullptr));
        pwf->setText(QApplication::translate("Widget", "\347\216\251\350\200\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
