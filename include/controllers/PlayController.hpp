#ifndef AGARIO_PLAYCONTROLLER_HPP
#define AGARIO_PLAYCONTROLLER_HPP

#include <PlayModel.hpp>
#include <StateController.hpp>
#include <PlayView.hpp>

class PlayModel;

class PlayController : public StateController
{
public:
    PlayController(PlayModel* m);
    virtual void handleEvents(sf::Event event);
};

#endif //AGARIO_PLAYCONTROLLER_HPP
