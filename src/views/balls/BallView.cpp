#include <balls/BallView.hpp>

BallView::BallView(BallModel * model) : model(model) {}

BallView::BallView(BallModel * model, sf::Color * color)
    : model(model), color(color) {
        shape = new sf::CircleShape(0);
}

void BallView::draw(sf::RenderWindow* window){
    shape->setRadius(model->getRadius());
    shape->setPosition(model->getX(), model->getY());
    window->draw(*shape);
}

