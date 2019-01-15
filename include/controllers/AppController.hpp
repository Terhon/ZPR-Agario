#ifndef APPCONTROLLER_H
#define APPCONTROLLER_H

#include <App.hpp>
#include <SFML/Window.hpp>

class App;

class AppController {
private:
    App *app;

public:
    AppController(App *app);

    void handleEvents(sf::Event event);
};

#endif