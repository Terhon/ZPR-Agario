#include <balls/BallView.hpp>

BallView::BallView(BallModel *model, sf::Color *color)
        : model(model), color(color) {
    shape = new sf::CircleShape();
}

void BallView::draw(sf::RenderWindow *window) {
    shape->setRadius(model->getRadius());
    shape->setPosition(model->getX(), model->getY());
    shape->setFillColor(*color);
    window->draw(*shape);
}
