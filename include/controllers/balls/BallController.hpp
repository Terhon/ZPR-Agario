#ifndef AGARIO_BALLCONTROLLER_HPP
#define AGARIO_BALLCONTROLLER_HPP

#include <states/StartModel.hpp>

class BallModel;

class BallController {
protected:
    BallModel *model;

public:
    BallController(BallModel *m) : model(m) {}

    virtual void handleEvents(sf::Event event) = 0;
};

#endif //AGARIO_BALLCONTROLLER_HPP
