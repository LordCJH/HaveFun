#include "widget.h"
#include "ui_widget.h"

static int seed_count = 0;
static int kunkun_experience = 0;
static int kunkun_experience_max = 1;
static int kunkun_level = 0;
static int kunkun_stage = 1;
static QString kunkun_outlook;


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    /* music initialize */
    ply = new QMediaPlayer(this);
    plist = new QMediaPlaylist;

    plist->setCurrentIndex(0);
    plist->setPlaybackMode(QMediaPlaylist::Random);
    plist->addMedia(QUrl("./songs/Superkg - 鸡出没（Superkg remix）.mp3"));
    plist->addMedia(QUrl("./songs/金色传说竹鼠 - 【鸡你太美】仙剑鸡侠传.mp3"));
    plist->addMedia(QUrl("./songs/泷 - 蜜雪鸡城.mp3"));
    plist->addMedia(QUrl("./songs/无名氏的小陈 - 爱鸡—王坤凌.mp3"));
    plist->addMedia(QUrl("./songs/无名氏的小陈 - 你干嘛哈哈哎哟.mp3"));

    ply->setPlaylist(plist);
    ply->playlist()->setPlaybackMode(QMediaPlaylist::Random);
    ply->setVolume(50);
    ply->play();

    /* volumn switch initialize */

    on_volumn = new QIcon(":/pic/dakaiyinliang.jpg");
    off_volumn = new QIcon(":/pic/guanbiyinliang.jpg");

    ui->volumn_switch->setIcon(*on_volumn);
    ui->volumn_switch->setIconSize(ui->volumn_switch->size());

    /* skill button initialize */

    ui->jinjie->hide();
    ui->dance->hide();
    ui->bathe->hide();
    ui->pwf->hide();

    ui->tiaowu_tishi->hide();

    /* jinjie widget initialize */
    ui->zhongjijinhua_widget->hide();

    movie = new QMovie();
    tishi_movie = new QMovie();


    ui->kunkun_name->setText("婴儿坤坤");

    movie->setFileName(":/pic/yingerkunkun.jpg");
    movie->setScaledSize(QSize(821, 701));
    //ui->label->setFixedSize(QSize(500, 300));
    ui->label->setMovie(movie);
    movie->start();

//    tishi_movie->setFileName(":/pic/shengji0.png");
//    tishi_movie->setScaledSize(QSize(681, 531));
//    ui->tishi->setMovie(tishi_movie);
    //ui->tishi->setText("进化");
    ui->jinhua_label->setText("进化");
    //tishi_movie->start();
    ui->jinhua_label->hide();
    ui->tishi->hide();



    //timerId = startTimer(1000);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_seed_food_clicked()
{

    seed_count++;
    kunkun_experience++;

    switch (seed_count) {
    case 0:

        break;
    case 1:

        ui->weishi_tishi->hide();

        ui->kunkun_name->setText("幼儿坤坤");

        movie->stop();
        movie->setFileName(":/pic/youerkunkun.jpg");
        movie->start();

        /* 设置坤坤等级 */
        kunkun_level++;
        ui->kunkun_level->setText("1");

        kunkun_experience = 0;
        kunkun_experience_max = 2;

        /* 设置坤坤成长进度条最大值 */
        ui->kunkun_growup_value->setMaximum(kunkun_experience_max);

        /* 设置升级提示 */
        //tishi_movie->stop();
        //tishi_movie->start();
        //ui->tishi->setMovie(tishi_movie);
        ui->jinhua_label->show();
        ui->tishi->show();
        timerId = startTimer(1000);

        break;
    case 3:
        ui->kunkun_name->setText("禿頭坤坤");

        movie->stop();
        movie->setFileName(":/pic/tutoukunkun.jpg");
        movie->start();


        /* 设置坤坤等级 */
        kunkun_level++;
        ui->kunkun_level->setText("2");

        kunkun_experience = 0;
        kunkun_experience_max = 3;

        /* 设置坤坤成长进度条最大值 */
        ui->kunkun_growup_value->setMaximum(kunkun_experience_max);
        ui->kunkun_growup_value->setValue(kunkun_experience);

        /* 设置升级提示 */
        //tishi_movie->stop();
        //tishi_movie->start();
        //ui->tishi->setMovie(tishi_movie);
        ui->jinhua_label->show();
        ui->tishi->show();
        timerId = startTimer(1000);
        break;
    case 6:
        ui->kunkun_name->setText("键盘坤坤");

        movie->stop();
        movie->setFileName(":/pic/jianpankunkun.jpg");
        movie->start();

        /* 设置坤坤等级 */
        kunkun_level++;
        ui->kunkun_level->setText("3");

        kunkun_experience = 0;
        kunkun_experience_max = 4;

        /* 设置坤坤成长进度条最大值 */
        ui->kunkun_growup_value->setMaximum(kunkun_experience_max);
        ui->kunkun_growup_value->setValue(kunkun_experience);

        /* 设置升级提示 */
        //tishi_movie->stop();
        //tishi_movie->start();
        //ui->tishi->setMovie(tishi_movie);
        ui->weishi_tishi->setText("点击按钮让坤坤洗澡啦！");
        ui->weishi_tishi->show();
        ui->bathe->show();
        ui->jinhua_label->show();
        ui->tishi->show();
        unlock_skill_timerId = startTimer(1000);
        break;
    case 10:
        ui->kunkun_name->setText("可达鸭坤坤");

        movie->stop();
        movie->setFileName(":/pic/kedaya_kunkun.jpg");
        movie->start();

        /* 设置坤坤等级 */
        kunkun_level++;
        ui->kunkun_level->setText("4");

        kunkun_experience = 0;
        kunkun_experience_max = 5;

        /* 设置坤坤成长进度条最大值 */
        ui->kunkun_growup_value->setMaximum(kunkun_experience_max);
        ui->kunkun_growup_value->setValue(kunkun_experience);

        /* 设置升级提示 */
        //tishi_movie->stop();
        //tishi_movie->start();
        //ui->tishi->setMovie(tishi_movie);

        ui->jinhua_label->show();
        ui->tishi->show();
        timerId = startTimer(1000);
        break;
    case 15:
        ui->kunkun_name->setText("黑暗哲学坤坤");

        movie->stop();
        movie->setFileName(":/pic/dark_kunkun.jpg");
        movie->start();

        /* 设置坤坤等级 */
        kunkun_level++;
        ui->kunkun_level->setText("5");

        kunkun_experience = 0;
        kunkun_experience_max = 6;

        /* 设置坤坤成长进度条最大值 */
        ui->kunkun_growup_value->setMaximum(kunkun_experience_max);
        ui->kunkun_growup_value->setValue(kunkun_experience);

        /* 设置升级提示 */
        //tishi_movie->stop();
        //tishi_movie->start();
        //ui->tishi->setMovie(tishi_movie);
        ui->jinhua_label->show();
        ui->tishi->show();
        timerId = startTimer(1000);
        break;
    case 21:
        ui->kunkun_name->setText("鲨鱼国王坤坤");

        movie->stop();
        movie->setFileName(":/pic/shayuguowang.jpg");
        movie->start();

        /* 设置坤坤等级 */
        kunkun_level++;
        ui->kunkun_level->setText("6");

        kunkun_experience = 0;
        kunkun_experience_max = 7;

        /* 设置坤坤成长进度条最大值 */
        ui->kunkun_growup_value->setMaximum(kunkun_experience_max);
        ui->kunkun_growup_value->setValue(kunkun_experience);

        /* 设置升级提示 */
        //tishi_movie->stop();
        //tishi_movie->start();
        //ui->tishi->setMovie(tishi_movie);
        ui->jinhua_label->show();
        ui->tishi->show();
        timerId = startTimer(1000);
        break;
    case 28:
        ui->kunkun_name->setText("篮球坤坤");

        movie->stop();
        movie->setFileName(":/pic/naqiukunkun.jpg");
        movie->start();

        /* 设置坤坤等级 */
        kunkun_level++;
        ui->kunkun_level->setText("7");

        kunkun_experience = 2;
        kunkun_experience_max = 2;

        /* 设置坤坤成长进度条最大值 */
        ui->kunkun_growup_value->setMaximum(kunkun_experience_max);
        ui->kunkun_growup_value->setValue(kunkun_experience);

        /* 设置升级提示 */
        //tishi_movie->stop();
        //tishi_movie->start();
        //ui->tishi->setMovie(tishi_movie);
        ui->seed_food->hide();
        ui->bathe->hide();
        ui->jinjie->show();
        ui->jinhua_label->show();
        ui->tishi->show();
        timerId = startTimer(1000);
        break;

    case 30:
        if (kunkun_stage != 2) {
            //qDebug("%d", kunkun_stage);
            break;
        }

        ui->kunkun_name->setText("你干嘛坤坤");

        movie->stop();
        movie->setFileName(":/pic/niganma.jpg");
        movie->start();

        /* 设置坤坤等级 */
        kunkun_level++;
        ui->kunkun_level->setText("8");

        kunkun_experience = 0;
        kunkun_experience_max = 3;

        /* 设置坤坤成长进度条最大值 */
        ui->kunkun_growup_value->setMaximum(kunkun_experience_max);
        ui->kunkun_growup_value->setValue(kunkun_experience);

        /* 设置升级提示 */
        //tishi_movie->stop();
        //tishi_movie->start();
        //ui->tishi->setMovie(tishi_movie);
        //ui->jinjie->show();
        ui->jinhua_label->show();
        ui->tishi->show();

        ui->pwf->show();
        ui->weishi_tishi->setText("叫坤坤和朋友玩吧！");
        unlock_skill_timerId = startTimer(1000);
        break;
    case 33:
        if (kunkun_stage != 2) {
            //qDebug("%d", kunkun_stage);
            break;
        }

        ui->kunkun_name->setText("小混混坤坤");

        movie->stop();
        movie->setFileName(":/pic/dd_kunkun.png");
        movie->start();

        /* 设置坤坤等级 */
        kunkun_level++;
        ui->kunkun_level->setText("9");

        kunkun_experience = 0;
        kunkun_experience_max = 4;

        /* 设置坤坤成长进度条最大值 */
        ui->kunkun_growup_value->setMaximum(kunkun_experience_max);
        ui->kunkun_growup_value->setValue(kunkun_experience);

        /* 设置升级提示 */
        //tishi_movie->stop();
        //tishi_movie->start();
        //ui->tishi->setMovie(tishi_movie);
        //ui->jinjie->show();
        ui->jinhua_label->show();
        ui->tishi->show();
        timerId = startTimer(1000);
        break;

    case 37:




//        if (kunkun_stage != 3) {
//            //qDebug("%d", kunkun_stage);
//            break;
//        }

//        ui->kunkun_name->setText("远古虚鲲");

//        movie->stop();
//        movie->setFileName(":/pic/yiniantongkun.gif");
//        movie->start();

        /* 设置坤坤等级 */
        kunkun_level++;
        ui->kunkun_level->setText("10");

        kunkun_experience = 5;
        kunkun_experience_max = 5;

        /* 设置坤坤成长进度条最大值 */
        ui->kunkun_growup_value->setMaximum(kunkun_experience_max);
        ui->kunkun_growup_value->setValue(kunkun_experience);

        /* 设置升级提示 */
        ui->seed_food->hide();
        ui->bathe->hide();
        ui->dance->hide();
//        ui->jinjie->setText("终极进化");
//        ui->jinjie->show();
        ui->pwf->hide();
        ui->jinjie->hide();

        ui->zhongjijinhua_widget->show();

        ui->jinhua_label->show();
        ui->tishi->show();

        timerId = startTimer(1000);
        break;
//    case 42:

//        if (kunkun_stage != 3) {
//            //qDebug("%d", kunkun_stage);
//            break;
//        }


//        /* 设置坤坤等级 */
//        kunkun_level++;
//        ui->kunkun_level->setText("11");

//        kunkun_experience = 0;
//        kunkun_experience_max = 6;

//        /* 设置坤坤成长进度条最大值 */
//        ui->kunkun_growup_value->setMaximum(kunkun_experience_max);
//        ui->kunkun_growup_value->setValue(kunkun_experience);

//        /* 设置升级提示 */

//        ui->jinhua_label->show();
//        ui->tishi->show();

//        timerId = startTimer(1000);
//        break;
    default:
        break;
    }
    ui->kunkun_growup_value->setValue(kunkun_experience);

}

void Widget::on_exit_clicked()
{
    this->close();
}


void Widget::timerEvent(QTimerEvent *event)
{
    qDebug("timerEvent:%d %d %d %d", event->timerId(), timerId, unlock_skill_timerId, dance_timerId);
    //killTimer(event->timerId());
    //tishi_movie->stop();

    if (event->timerId() == unlock_skill_timerId) {
        qDebug("timerEvent2:%d", unlock_skill_timerId);
        killTimer(unlock_skill_timerId);
        unlock_skill_timerId = 0;

        ui->jinhua_label->hide();
        ui->tishi->hide();

        ui->weishi_tishi->hide();
        ui->tiaowu_tishi->hide();

    } else if (event->timerId() == timerId) {
        qDebug("timerEvent1:%d", timerId);
        killTimer(timerId);
        timerId = 0;

        ui->jinhua_label->hide();
        ui->tishi->hide();

        //ui->weishi_tishi->hide();
        //ui->tiaowu_tishi->hide();
    } else if (event->timerId() == dance_timerId) {
        qDebug("timerEvent3:%d", dance_timerId);
        //qDebug("dance_timerId");
        killTimer(dance_timerId);
        dance_timerId = 0;
        movie->stop();
        movie->setFileName(kunkun_outlook);
        movie->start();

        ui->seed_food->setEnabled(true);
        ui->dance->setEnabled(true);
        ui->bathe->setEnabled(true);
        ui->pwf->setEnabled(true);
    } else if (event->timerId() == bathe_timerId) {
        qDebug("timerEvent4:%d", bathe_timerId);
        killTimer(bathe_timerId);
        dance_timerId = 0;
        movie->stop();
        movie->setFileName(kunkun_outlook);
        movie->start();

        ui->seed_food->setEnabled(true);
        ui->bathe->setEnabled(true);
        ui->dance->setEnabled(true);
        ui->pwf->setEnabled(true);

    } else if (event->timerId() == pwf_timerId) {
        qDebug("timerEvent5:%d", pwf_timerId);
        killTimer(bathe_timerId);
        pwf_timerId = 0;
        movie->stop();
        movie->setFileName(kunkun_outlook);
        movie->start();

        ui->seed_food->setEnabled(true);
        ui->bathe->setEnabled(true);
        ui->dance->setEnabled(true);
        ui->pwf->setEnabled(true);

    } else {
        killTimer(event->timerId());
    }
}




void Widget::on_volumn_switch_clicked()
{
    static int count = 0;
    if (count == 0) {
        count = 1;
        ply->setVolume(0);
        ui->volumn_switch->setIcon(*off_volumn);
    } else {
        count = 0;
        ply->setVolume(50);
        ui->volumn_switch->setIcon(*on_volumn);
    }

}


void Widget::on_jinjie_clicked()
{
    kunkun_stage++;
    ui->kunkun_stage->setText("2（修炼成人）");
    movie->stop();
    movie->setFileName(":/pic/kunkun_renxing.jpg");
    movie->start();

    kunkun_experience = 0;
    kunkun_experience_max = 2;

    ui->kunkun_growup_value->setMaximum(kunkun_experience_max);
    ui->kunkun_growup_value->setValue(kunkun_experience);


    ui->kunkun_name->setText("运球坤坤");

    ui->jinjie->hide();
    ui->seed_food->show();
    ui->bathe->show();

    ui->dance->show();
    ui->tiaowu_tishi->show();


    unlock_skill_timerId = startTimer(1000);

    //qDebug("kunkun_stage:%d", kunkun_stage);

}


void Widget::on_dance_clicked()
{
    ui->seed_food->setDisabled(true);
    ui->bathe->setDisabled(true);
    ui->dance->setDisabled(true);
    ui->pwf->setDisabled(true);

    //ui->tiaowu_tishi->hide();

    kunkun_outlook = movie->fileName();
    //qDebug("%s", kunkun_outlook.toStdString().data());

    movie->stop();
    movie->setFileName(":/pic/kunkun.gif");
    movie->start();


    dance_timerId = startTimer(3000);

}

void Widget::on_bathe_clicked()
{
    ui->seed_food->setDisabled(true);
    ui->bathe->setDisabled(true);
    ui->dance->setDisabled(true);
    ui->pwf->setDisabled(true);

    //ui->weishi_tishi->hide();

    kunkun_outlook = movie->fileName();

    movie->stop();
    movie->setFileName(":/pic/kunkun_xizao.gif");
    movie->start();


    bathe_timerId = startTimer(3000);
}

void Widget::on_pwf_clicked()
{
    ui->seed_food->setDisabled(true);
    ui->bathe->setDisabled(true);
    ui->dance->setDisabled(true);
    ui->pwf->setDisabled(true);

    //ui->weishi_tishi->hide();

    kunkun_outlook = movie->fileName();

    movie->stop();
    movie->setFileName(":/pic/kunkun_pwf.gif");
    movie->start();


    bathe_timerId = startTimer(3000);
}

void Widget::on_tt_pushButton_clicked()
{
    kunkun_stage++;
    ui->kunkun_stage->setText("3（通天）");
    movie->stop();
    movie->setFileName(":/pic/yiniantongkun.gif");
    movie->start();

    ui->kunkun_name->setText("通天坤");

    ui->weishi_tishi->setText("一念通坤，神鸡无惧！");
    ui->weishi_tishi->move(1000, 330);
    ui->weishi_tishi->show();

    ui->seed_food->show();
    ui->bathe->show();
    ui->dance->show();
    ui->pwf->show();

    plist->clear();
    plist->addMedia(QUrl("./songs/一念通坤.mp3"));

    ply->stop();
    ply->setPlaylist(plist);
    ply->playlist()->setPlaybackMode(QMediaPlaylist::Loop);
    ply->setVolume(100);
    ply->play();


    ui->zhongjijinhua_widget->hide();
}

void Widget::on_hk_pushButton_clicked()
{
    kunkun_stage++;
    ui->kunkun_stage->setText("3（化鲲）");
    movie->stop();
    movie->setFileName(":/pic/xukun.gif");
    movie->start();


    ui->kunkun_name->setText("蔡虚鲲");

    ui->weishi_tishi->setText("北溟有鸡，其名为坤！");
    ui->weishi_tishi->move(1000, 330);
    ui->weishi_tishi->show();

    ui->seed_food->show();
    ui->bathe->show();
    ui->dance->show();
    ui->pwf->show();

    plist->clear();
    plist->addMedia(QUrl("./songs/泷 - 化鸡飞.mp3"));

    ply->stop();
    ply->setPlaylist(plist);
    ply->playlist()->setPlaybackMode(QMediaPlaylist::Loop);
    ply->setVolume(50);
    ply->play();

    ui->zhongjijinhua_widget->hide();
}

void Widget::on_by_pushButton_clicked()
{
    kunkun_stage++;
    ui->kunkun_stage->setText("3（变异）");
    movie->stop();
    movie->setFileName(":/pic/300w.gif");
    movie->start();

    ui->kunkun_name->setText("价值300万的鸡");

    ui->weishi_tishi->setText("坤坤获得一笔300w的打赏,\n老板是：唯一的姐！");
    ui->weishi_tishi->move(950, 330);
    ui->weishi_tishi->show();

    ui->seed_food->show();
    ui->bathe->show();
    ui->dance->show();
    ui->pwf->show();

    plist->clear();
    plist->addMedia(QUrl("./songs/唯一的姐.mp3"));

    ply->stop();
    ply->setPlaylist(plist);
    ply->playlist()->setPlaybackMode(QMediaPlaylist::Loop);
    ply->setVolume(100);
    ply->play();

    ui->zhongjijinhua_widget->hide();
}
