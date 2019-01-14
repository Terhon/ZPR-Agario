#ifndef AGARIO_BALLVIEW_HPP
#define AGARIO_BALLVIEW_HPP

#include <balls/BallModel.hpp>

class BallModel;

class BallView
{
protected: 
    BallModel * model;
    sf::Color * color;
    sf::CircleShape * shape;
public:
    BallView(BallModel * m, sf::Color * color);
    void setColor(sf::Color * color) {this->color = color;}
    sf::Color * getColor() {return color;}
    virtual void draw(sf::RenderWindow* window);
};

#endif //AGARIO_BALLVIEW_HPP
