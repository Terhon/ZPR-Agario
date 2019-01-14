#ifndef AGARIO_BALLMODEL_HPP
#define AGARIO_BALLMODEL_HPP

#include <balls/BallController.hpp>
#include <balls/BallView.hpp>

class BallController;
class BallView;

class BallModel
{
protected:
    BallController* controller;
    BallView* view;
    int x, y;
    int radius;
    double velocity;
    double acceleration;

public:
    virtual void update();
    int getRadius(){return radius;}
};

#endif //AGARIO_BALLMODEL_HPP
