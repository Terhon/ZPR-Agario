#include <BallView.hpp>

BallView::BallView(BallModel * model) : model(model) {}

BallView(BallModel * model, sf::Color * color)
    : model(model), shape(shape), color(color) {
        shape = new sf::CircleShape();
}


void PlayerView::draw(sf::RenderWindow* window){
    shape->setRadius(model->getRadius());
    shape->setPosition(model->getX(), model->getY());
    window->draw(shape);
}

