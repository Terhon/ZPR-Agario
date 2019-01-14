#include <App.hpp>
#include <states/StartModel.hpp>

App::App() 
{
    controller = new AppController(this);
    view = new AppView(this);
    running = true;
    window = new sf::RenderWindow();
}

App::~App(){ 
    while(!state_stack.empty())
        state_stack.pop();
}

void App::initWindow()
{
    window->create(sf::VideoMode(800, 600), "ZPR.io");
    window->setFramerateLimit(60);
}

void App::run()
{
    initWindow();
    state_stack.push(new StartModel(this));

    sf::Event event;
    while(running)
    {
        while(window->pollEvent(event))
            controller->handleEvents(event);
        update();
        view->draw();
    }
}

void App::update(){
    state_stack.top()->update();
}

void App::pushStack(StateModel * state){
    state_stack.push(state);
}

void App::popStack(){
    state_stack.pop();
}

StateModel* App::peekStack() {
    return state_stack.top();
}