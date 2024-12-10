#ifndef MYVIEW1_H
#define MYVIEW1_H

#include "view.h"
#include <QObject>
#include "widget.h"

class myView1 : public View
{
public:
    myView1();
    void update();
    void notify();

private:
    Widget *widget;
};

#endif // MYVIEW1_H
