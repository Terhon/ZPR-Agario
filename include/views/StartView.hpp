#ifndef STARTVIEW_HPP
#define STARTVIEW_HPP

#include <StateView.hpp>

class StartView : public StateView {
    
    public:
    virtual void draw(sf::RenderWindow* window);
};

#endif