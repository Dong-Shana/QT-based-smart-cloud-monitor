#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>

//#include "layoutDemo.h"
#include "qwidgetdraw.h"

int main(int argc, char * argv[])
{
    QApplication a(argc, argv);

    QWidgetDraw *drawWidgetEcgI = new QWidgetDraw();
    QWidgetDraw *drawWidgetEcgII = new QWidgetDraw();

    drawWidgetEcgI->setSizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
    drawWidgetEcgII->setSizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);

    QVBoxLayout *layoutMain = new QVBoxLayout();

    layoutMain->addWidget(drawWidgetEcgI);
    layoutMain->addWidget(drawWidgetEcgII);

    QWidget *mainWin = new QWidget();
    mainWin->setWindowTitle("TeamName 1600 x 600");
    mainWin->setLayout(layoutMain);
    mainWin->resize(1600, 600);

    mainWin->show();

    return a.exec();
}

