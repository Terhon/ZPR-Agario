#ifndef APP_H
#define APP_H

#include <iostream>
#include <unistd.h>
#include <AppController.hpp>
#include <AppView.hpp>
#include <SFML/Window.hpp>

class AppController;

class App
{
    private:
    AppController* controller;
    AppView* view;
    sf::Window* window;

    bool running;

    public:
    App();

    void run();
    void update(){}
    void setRunning(bool val){ running = val; }
    sf::Window* getWindow(){ return window; }
};

#endif