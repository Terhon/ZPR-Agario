#ifndef STARTCONTROLLER_HPP
#define STARTCONTROLLER_HPP

#include <StartModel.hpp>
#include <StateController.hpp>
#include <StartView.hpp>

class StartModel;

class StartController : public StateController 
{
    public:
    StartController(StartModel* m);
    virtual void handleEvents(sf::Event event);
};

#endif