#include "qwidgetdraw.h"
#include "QPainter"


QWidgetDraw::QWidgetDraw(QWidget *parent) : QWidget(parent)
{
    this->setWindowTitle("团队名字");

    // todo
    // 1. 创建定时器
    // 2. 显示时间
    // 3.
}

// 事件机制
void QWidgetDraw::paintEvent(QPaintEvent *event)
{
    QPainter *painter = new QPainter(this);
    painter->drawLine(0, 0, 100, 100);
    painter->drawRect(0, 0, 100, 100);
}
