#ifndef AGARIO_PLAYERCONTROLLER_HPP
#define AGARIO_PLAYERCONTROLLER_HPP

#include <balls/BallController.hpp>
#include <balls/PlayerModel.hpp>

class BallController;

class PlayerModel;

class PlayerController : public BallController {
public:
    PlayerController(PlayerModel *m);

    virtual void handleEvents(sf::Event event);
};

#endif