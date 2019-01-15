#ifndef APPVIEW_H
#define APPVIEW_H

#include <App.hpp>

class App;

class AppView {
private:
    App *model;

public:
    AppView(App *app) : model(app) {}

    void draw();
};

#endif