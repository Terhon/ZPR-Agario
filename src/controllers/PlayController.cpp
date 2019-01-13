#include <PlayController.hpp>

PlayController::PlayController(PlayModel *m)
{
    model = m;
}

void PlayController::handleEvents(sf::Event event)
{
    if(event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::P)
        dynamic_cast<PlayModel*> (model)->pushPause();
}