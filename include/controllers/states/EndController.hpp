#ifndef AGARIO_ENDCONTROLLER_HPP
#define AGARIO_ENDCONTROLLER_HPP

#include <states/EndModel.hpp>
#include <states/StateController.hpp>
#include <states/EndView.hpp>

class EndModel;

class EndController : public StateController {
public:
    EndController(EndModel *m);

    virtual void handleEvents(sf::Event event);
};

#endif //AGARIO_ENDCONTROLLER_HPP
