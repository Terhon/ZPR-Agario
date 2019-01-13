#ifndef AGARIO_PAUSECONTROLLER_HPP
#define AGARIO_PAUSECONTROLLER_HPP

#include <PauseModel.hpp>
#include <StateController.hpp>
#include <PauseView.hpp>

class PauseModel;

class PauseController : public StateController
{
public:
    PauseController(PauseModel* m);
    virtual void handleEvents(sf::Event event);
};

#endif //AGARIO_PAUSECONTROLLER_HPP
