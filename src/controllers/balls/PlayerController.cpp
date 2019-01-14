#include <balls/PlayerController.hpp>

PlayerController::PlayerController(PlayerModel *m):BallController(m) {}

void PlayerController::handleEvents(sf::Event event)
{
    if(event.type == sf::Event::KeyPressed)
        if(event.key.code == sf::Keyboard::Up)
            model->setX(model->getX()+1);
}