#ifndef APP_H
#define APP_H

#define FPS 60

class AppController;
class AppView;
class StartModel;
class StateModel;

#include <iostream>
#include <unistd.h>
#include <AppController.hpp>
#include <AppView.hpp>
#include <SFML/Graphics.hpp>
#include <states/StateModel.hpp>
#include <stack>
#include <chrono>
#include <thread>

class App
{
    private:
    AppController* controller;
    AppView* view;
    sf::RenderWindow* window;
    std::stack<StateModel*> state_stack;
    std::chrono::milliseconds tick = std::chrono::milliseconds(1000/60);

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