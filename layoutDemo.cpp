#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QDebug>

#include "qwidgetdemo.h"


void layoutDemo2(void)
{
    QWidget *demoWidgetMain = new QWidget();
    demoWidgetMain->resize(150,400);

    QWidgetDemo *demoWidget1 = new QWidgetDemo();
    QWidgetDemo *demoWidget2 = new QWidgetDemo();
    QWidgetDemo *demoWidget3 = new QWidgetDemo();

    //创建垂直箱式布局器
    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(demoWidget1);
    layout->addWidget(demoWidget2);
    layout->addWidget(demoWidget3);

    demoWidgetMain->setLayout(layout);
    demoWidgetMain->show();
}

void layoutDemo1(void)
{
    //创建界面
    QWidget *winMain = new QWidget();

    //设计界面尺寸
    winMain->resize(800,480);

    //创建按钮
    QPushButton *btnReplay = new QPushButton("Repaly");
    QPushButton *btnLogin = new QPushButton("Login");
    QPushButton *btnConfig = new QPushButton("Config");

#if 0
    //按钮参数打印
    qDebug()<<btnReplay->sizeHint();
    qDebug()<<btnReplay->size();
    qDebug()<<btnReplay->minimumSizeHint();
    qDebug()<<btnReplay->minimumSize();

    //配置按钮尺寸
//    btnReplay->setMinimumSize(50,50);
//    btnReplay->setMaximumSize(100,100);
//    btnLogin->setMinimumSize(50,50);
//    btnLogin->setMaximumSize(100,100);
//    btnConfig->setMinimumSize(50,50);
//    btnConfig->setMaximumSize(100,100);
#endif
    /*
    enum Policy {
        Fixed = 0,
        Minimum = GrowFlag,
        Maximum = ShrinkFlag,
        Preferred = GrowFlag | ShrinkFlag,
        MinimumExpanding = GrowFlag | ExpandFlag,
        Expanding = GrowFlag | ShrinkFlag | ExpandFlag,
        Ignored = ShrinkFlag | GrowFlag | IgnoreFlag
    };
    */
    // 配置策略参数
    btnReplay->setSizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
    btnLogin->setSizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
    btnConfig->setSizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);

    //创建水平箱式布局器
    QHBoxLayout *layoutMain = new QHBoxLayout();

    //布局器添加按钮
    //根据添加顺序排序
    layoutMain->addWidget(btnReplay);
    layoutMain->addWidget(btnLogin);
    layoutMain->addWidget(btnConfig);

    // 拉伸因子
    layoutMain->setStretchFactor(btnReplay,2);
    layoutMain->setStretchFactor(btnLogin,2);
    layoutMain->setStretchFactor(btnConfig,2);
    layoutMain->insertStretch(3,1);
    layoutMain->insertStretch(2,1);
    layoutMain->insertStretch(1,1);
    layoutMain->insertStretch(0,1);

    //创建垂直箱式布局器
    QVBoxLayout *layout = new QVBoxLayout();

    //配置拉伸因子，并插入拉伸因子
    layout->addLayout(layoutMain);
    layout->setStretchFactor(layoutMain, 1);
    layout->insertStretch(1,1);
    layout->insertStretch(0,1);

    //把布局器应用到窗口
    winMain->setLayout(layout);
    winMain->show();
}

void layoutDemo0(void)
{
    //创建界面
    QWidget *winMain = new QWidget();

    //设计界面尺寸
    winMain->resize(800,480);

    //创建水平箱式布局器
    QHBoxLayout *hlayoutMain = new QHBoxLayout();

    //布局器添加按钮
    //根据添加顺序排序
    hlayoutMain->addWidget(new QPushButton("Replay"));
    hlayoutMain->addWidget(new QPushButton("Login"));
    hlayoutMain->addWidget(new QPushButton("Config"));

    //创建垂直箱式布局器
    QVBoxLayout *vlayoutMain = new QVBoxLayout();

    //布局器添加按钮
    vlayoutMain->addWidget(new QPushButton("Replay"));
    vlayoutMain->addWidget(new QPushButton("Login"));
    vlayoutMain->addWidget(new QPushButton("Config"));

    //创建水平箱式布局器
    QVBoxLayout *layoutMain = new QVBoxLayout();
    layoutMain->addLayout(vlayoutMain);
    layoutMain->addLayout(hlayoutMain);

    //把布局器应用到窗口
    winMain->setLayout(layoutMain);
    winMain->show();
}
