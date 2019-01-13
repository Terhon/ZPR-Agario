#ifndef AGARIO_ENDCONTROLLER_HPP
#define AGARIO_ENDCONTROLLER_HPP

#include <EndModel.hpp>
#include <StateController.hpp>
#include <EndView.hpp>

class EndModel;

class EndController : public StateController
{
public:
    EndController(EndModel* m);
    virtual void handleEvents(sf::Event event);
};

#endif //AGARIO_ENDCONTROLLER_HPP
