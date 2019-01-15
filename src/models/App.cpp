#include <App.hpp>
#include <states/StartModel.hpp>

using namespace std::chrono;

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
    window->create(sf::VideoMode(1200, 800), "ZPR.io");
    window->setFramerateLimit(60);
}

void App::run()
{
    initWindow();
    state_stack.push(new StartModel(this));

    sf::Event event;
    while(running)
    {
        high_resolution_clock::time_point t1 = high_resolution_clock::now();

        while(window->pollEvent(event))
            controller->handleEvents(event);

        update();
        view->draw();

        milliseconds span = duration_cast<milliseconds>(high_resolution_clock::now().time_since_epoch() - t1.time_since_epoch());
        if(span < tick)
            std::this_thread::sleep_for(tick - span);
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