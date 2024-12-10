#include "controller.h"
#include "model.h"
#include "view.h"
#include "myview1.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Controller *c = new Controller;
    Model *m = new Model;
    View *view = new myView1;

    return a.exec();
}
