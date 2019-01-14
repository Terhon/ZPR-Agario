#include <balls/PlayerView.hpp>

PlayerView::PlayerView(PlayerModel* m, sf::Color* c): BallView(m, c) {}

void PlayerView::draw(sf::RenderWindow *window)
{
    sf::CircleShape* c = new sf::CircleShape();
    c->setRadius(model->getRadius());
    c->setFillColor(sf::Color::Blue);
    c->setPosition(model->getX(), model->getY());

    window->draw(*c);
}