#ifndef VIEW_H
#define VIEW_H
#include "controller.h"

class Model;
class View
{
public:
    View();
    virtual void update() = 0;
    virtual void notify() = 0;
    void setController(Controller* controller);
    void setModel(Model* model);

protected:
    Controller *controller;
    Model *model;
};

#endif // VIEW_H
