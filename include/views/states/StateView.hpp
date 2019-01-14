#ifndef STATEVIEW_HPP
#define STATEVIEW_HPP

#include <states/StateModel.hpp>
#include <SFML/Graphics.hpp>

class StateModel;

class StateView
{
protected:
    StateModel* model;

public:
    StateView(StateModel* m):model(m){};
    virtual void draw(sf::RenderWindow* window) = 0;

};

#endif