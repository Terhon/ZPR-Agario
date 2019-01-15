#ifndef AGARIO_BOTCONTROLLER_HPP
#define AGARIO_BOTCONTROLLER_HPP

#include <balls/BallController.hpp>
#include <balls/BotModel.hpp>

class BotModel;

class BotController : public BallController {
public:
    BotController(BotModel *m);

    virtual void handleEvents(sf::Event event) {}
};

#endif