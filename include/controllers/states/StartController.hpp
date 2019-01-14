#ifndef STARTCONTROLLER_HPP
#define STARTCONTROLLER_HPP

#include <states/StartModel.hpp>
#include <states/StateController.hpp>
#include <states/StartView.hpp>

class StartModel;

class StartController : public StateController 
{
    public:
    StartController(StartModel* m);
    virtual void handleEvents(sf::Event event);
};

#endif