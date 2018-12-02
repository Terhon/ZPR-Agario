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
        sleep(1);

        window.pollEvent(event);
        controller->handleEvents(event);
        update();
        view->draw();
    }
}