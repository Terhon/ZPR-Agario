#ifndef APP_H
#define APP_H

#include <iostream>
#include <unistd.h>
#include <AppController.hpp>
#include <AppView.hpp>
#include <SFML/Window.hpp>
#include "StateModel.hpp"
#include <stack>

class AppController;

class App
{
    private:
    AppController* controller;
    AppView* view;
    sf::Window* window;
    std::stack<StateModel*> state_stack;

    bool running;

    public:
    App();

    void run();
    void update();
    void setRunning(bool val){ running = val; }
    sf::Window* getWindow(){ return window; }
    void putOnStack(StateModel * state);
    void popStack();
    StateModel * peekStack();
};

#endif