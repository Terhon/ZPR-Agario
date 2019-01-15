#include <balls/PlayerController.hpp>

PlayerController::PlayerController(PlayerModel *m) : BallController(m) {}

void PlayerController::handleEvents(sf::Event event) {
    if (event.type == sf::Event::KeyPressed)
        if (event.key.code == sf::Keyboard::Up)
            model->setVelY(-model->getVelocity());
        else if (event.key.code == sf::Keyboard::Down)
            model->setVelY(model->getVelocity());
        else if (event.key.code == sf::Keyboard::Left)
            model->setVelX(-model->getVelocity());
        else if (event.key.code == sf::Keyboard::Right)
            model->setVelX(model->getVelocity());
    if (event.type == sf::Event::KeyReleased)
        if (event.key.code == sf::Keyboard::Up)
            model->setVelY(0);
        else if (event.key.code == sf::Keyboard::Down)
            model->setVelY(0);
        else if (event.key.code == sf::Keyboard::Left)
            model->setVelX(0);
        else if (event.key.code == sf::Keyboard::Right)
            model->setVelX(0);
}