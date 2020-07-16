#include <QApplication>
#include <QWidget>

//#include "layoutDemo.h"
#include "qwidgetdraw.h"

int main(int argc, char * argv[])
{
    QApplication a(argc, argv);

    QWidgetDraw *drawWidget = new QWidgetDraw();

    drawWidget->setWindowTitle("Name");
    drawWidget->resize(600,150);

    drawWidget->show();

    return a.exec();
}

