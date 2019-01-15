#include <states/StartController.hpp>

StartController::StartController(StartModel *m) {
    model = m;
}

void StartController::handleEvents(sf::Event event) {
    if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::S)
        dynamic_cast<StartModel *> (model)->pushPlay();
}