#ifndef STATECONTROLLER_HPP
#define STATECONTROLLER_HPP

#include <states/StateModel.hpp>
#include <SFML/Window.hpp>

class StateModel;

class StateView;

class StateController {
protected:
    StateModel *model;

public:
    virtual void handleEvents(sf::Event event) = 0;
};

#endif