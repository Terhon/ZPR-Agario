#ifndef AGARIO_BALLMODEL_HPP
#define AGARIO_BALLMODEL_HPP

#include <balls/BallController.hpp>
#include <balls/BallView.hpp>
#include <cmath>

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
    BallModel(int x, int y, int radius) : x(x), y(y), radius(radius) {}
    int getX() {return x;}
    void setX(int x){this->x = x;}
    int getY() {return y;}
    void setY(int y){this->y = y;}
    int getRadius(){return radius;}
    void setRadius(int radius) {this->radius = radius;}
    int getVelocity(){return velocity;}
    void setVelocity(int radius) {this->velocity = velocity;}
    int getAcceleration(){return acceleration;}
    void setAcceleration(int radius) {this->acceleration = acceleration;}


    virtual void update(){}
    virtual int grow(int eatenRadius);
    virtual std::vector<BallModel>::iterator checkCollision(std::vector<BallModel> v);
};

#endif //AGARIO_BALLMODEL_HPP
