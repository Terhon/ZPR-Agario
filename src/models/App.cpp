#include <App.hpp>

App::App() 
{
    controller = new AppController(this);
    view = new AppView();
    running = true;
    window = nullptr;
}

void App::run()
{
    sf::Window window(sf::VideoMode(800, 600), "My window");

    sf::Event event;
    while(running)
    {
        if(window.pollEvent(event))
            controller->handleEvents(event);
        update();
        view->draw();
    }
}

void App::update(){

}

void App::pushStack(StateModel * state){
    state_stack.push(state);
}

void App::popStack(){
    state_stack.pop();
}

StateModel * App::peekStack() {
    return state_stack.top();
}