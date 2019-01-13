#include <AppController.hpp>

AppController::AppController(App* app) : app(app) {}

void AppController::handleEvents(sf::Event event) 
{
    if (event.type == sf::Event::Closed)
        app->setRunning(false);
}