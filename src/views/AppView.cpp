#include <AppView.hpp>

void AppView::draw()
{
    model->getWindow()->clear(sf::Color(0,0,0,255));

    model->peekStack()->getView()->draw(model->getWindow());

    model->getWindow()->display();
}