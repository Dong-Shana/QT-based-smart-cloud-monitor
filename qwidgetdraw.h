#ifndef QWIDGETDRAW_H
#define QWIDGETDRAW_H

#include <QWidget>

class QWidgetDraw : public QWidget
{
    Q_OBJECT
public:
    explicit QWidgetDraw(QWidget *parent = nullptr);

private:
    void paintEvent(QPaintEvent *event) override;

signals:

};

#endif // QWIDGETDRAW_H
