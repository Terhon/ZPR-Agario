#ifndef AGARIO_BALLVIEW_HPP
#define AGARIO_BALLVIEW_HPP

#include <balls/BallModel.hpp>

class BallView
{
protected: 
    BallModel * model;
    sf::Color * color;
    sf::Shape * shape;
public:
    BallView(BallModel * model, sf::Color * color);
    void setColor(sf::Color * color) {this->color = color;}
    sf::Color * getColor() {return color;}
    virtual void draw(sf::RenderWindow* window);
};

#endif //AGARIO_BALLVIEW_HPP
