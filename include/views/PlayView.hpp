#ifndef AGARIO_PLAYVIEW_HPP
#define AGARIO_PLAYVIEW_HPP

#include <StateView.hpp>

class PlayView: public StateView
{
    public:
    virtual void draw(sf::RenderWindow* window);
};

#endif //AGARIO_PLAYVIEW_HPP
