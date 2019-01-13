#ifndef AGARIO_PAUSEVIEW_HPP
#define AGARIO_PAUSEVIEW_HPP

#include <StateView.hpp>

class PauseView: public StateView
{
    public:
    virtual void draw(sf::RenderWindow* window);
};

#endif //AGARIO_PAUSEVIEW_HPP
