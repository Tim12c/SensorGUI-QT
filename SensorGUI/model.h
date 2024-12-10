#ifndef MODEL_H
#define MODEL_H
#include "view.h"
#include <iostream>

using namespace std;

class Model
{
public:
    Model();
    void update();
    string getState();
    void setView(View* view);

protected:
    View *view;
};

#endif // MODEL_H
