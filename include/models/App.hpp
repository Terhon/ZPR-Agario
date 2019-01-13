#ifndef APP_H
#define APP_H

class AppController;
class AppView;
class StartModel;
class StateModel;

#include <iostream>
#include <unistd.h>
#include <AppController.hpp>
#include <AppView.hpp>
#include <SFML/Graphics.hpp>
#include <StateModel.hpp>
#include <stack>

class App
{
    private:
    AppController* controller;
    AppView* view;
    sf::RenderWindow* window;
    std::stack<StateModel*> state_stack;

    bool running;

    public:
    App();
    ~App();

    void initWindow();
    void run();

    void update();
    void setRunning(bool val){ running = val; }
    void pushStack(StateModel * state);
    void popStack();
    StateModel* peekStack();
    int stackSize() {return state_stack.size();};
    sf::RenderWindow* getWindow(){ return window; }
};

#endif