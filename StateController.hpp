#ifndef STATECONTROLLER_HPP
#define STATECONTROLLER_HPP

#include "StateModel.hpp"
#include "StateView.hpp"

class StateController {
    
    public:
        virtual void udpateModel() = 0;
        virtual void updateView() = 0;
};

#endif STATECONTROLLER_HPP