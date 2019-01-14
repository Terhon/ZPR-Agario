#include <states/PauseController.hpp>

PauseController::PauseController(PauseModel *m)
{
    model = m;
}

void PauseController::handleEvents(sf::Event event)
{
    if(event.type == sf::Event::KeyPressed)
        if(event.key.code == sf::Keyboard::P)
            dynamic_cast<PauseModel*> (model)->popPause();
        else if(event.key.code == sf::Keyboard::R)
            dynamic_cast<PauseModel*> (model)->resetGame();
        else if(event.key.code == sf::Keyboard::Escape)
            dynamic_cast<PauseModel*> (model)->endGame();
}