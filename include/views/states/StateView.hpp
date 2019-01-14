#ifndef STATEVIEW_HPP
#define STATEVIEW_HPP

#include <SFML/Graphics.hpp>

class StateView {
    
    public:
    virtual void draw(sf::RenderWindow* window) = 0;

};

#endif