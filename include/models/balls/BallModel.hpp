#ifndef AGARIO_BALLMODEL_HPP
#define AGARIO_BALLMODEL_HPP

#include <balls/BallController.hpp>
#include <balls/BallView.hpp>
#include <cmath>
#include <vector>

class BallController;
class BallView;

class BallModel
{
protected:
    BallController* controller;
    BallView* view;
    double x, y;
    double radius;
    double velX = 0, velY = 0;
    double acceleration;

public:
    int getX() {return x;}
    void setX(int x){this->x = x;}
    int getY() {return y;}
    void setY(int y){this->y = y;}
    int getRadius(){return radius;}
    void setRadius(int radius) {this->radius = radius;}

    virtual std::vector<BallModel*>::iterator checkCollision(std::vector<BallModel*>* v);

    BallController* getController(){ return controller;}
    BallView* getView(){ return view;}

    virtual void update() = 0;
    int grow(int eatenRadius);

    BallModel(int x, int y, int r);
};

#endif //AGARIO_BALLMODEL_HPP
