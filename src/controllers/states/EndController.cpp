#include <states/EndController.hpp>

EndController::EndController(EndModel *m)
{
    model = m;
}

void EndController::handleEvents(sf::Event event)
{
    if(event.type == sf::Event::KeyPressed)
        if(event.key.code == sf::Keyboard::R)
            dynamic_cast<EndModel*> (model)->resetGame();
        else if(event.key.code == sf::Keyboard::Escape)
            dynamic_cast<EndModel*> (model)->exitGame();
}