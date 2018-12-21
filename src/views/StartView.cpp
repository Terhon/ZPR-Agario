#include <StartView.hpp>

void StartView::draw(sf::RenderWindow* window)
{
    sf::CircleShape shape(50.f);
    shape.setFillColor(sf::Color::Red);
    window->draw(shape);
}