#ifndef CONTROLLER_H
#define CONTROLLER_H

class View;
class Model;
class Controller
{
public:
    Controller();
    void action();
    void setView(View* view);
    void setModel(Model* model);

private:
    View *view;
    Model *model;
};

#endif // CONTROLLER_H
