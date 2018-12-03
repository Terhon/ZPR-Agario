#ifndef APP_H
#define APP_H

#include <iostream>
#include <unistd.h>
#include <AppController.hpp>
#include <AppView.hpp>
#include <SFML/Window.hpp>
#include "StartModel.hpp"
#include <stack>

class AppController;
class StartModel;

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
    ~App();

    void run();
    void update();
    void setRunning(bool val){ running = val; }
    sf::Window* getWindow(){ return window; }
    void pushStack(StateModel * state);
    void popStack();
    StateModel * peekStack();
    int stackSize() {return state_stack.size();};
};

#endif