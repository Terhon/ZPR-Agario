#ifndef STARTCONTROLLER_HPP
#define STARTCONTROLLER_HPP

#include <StateController.hpp>
#include <StartModel.hpp>
#include <StartView.hpp>

class StartController : public StateController 
{
    public:
    StartController(StartModel* m){model = m;}

    void handleEvents(sf::Event event);
};

#endif