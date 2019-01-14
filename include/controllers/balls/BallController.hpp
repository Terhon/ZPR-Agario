#ifndef AGARIO_BALLCONTROLLER_HPP
#define AGARIO_BALLCONTROLLER_HPP

#include <states/StartModel.hpp>
#include <balls/BallModel.hpp>

class BallModel;

class BallController
{
protected:
    BallModel* model;

public:
    BallController(BallModel* app);

    virtual void handleEvents(sf::Event event);
};

#endif //AGARIO_BALLCONTROLLER_HPP
