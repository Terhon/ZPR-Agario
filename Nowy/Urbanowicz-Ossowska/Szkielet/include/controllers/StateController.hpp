#ifndef STATECONTROLLER_HPP
#define STATECONTROLLER_HPP

class StateModel;
class StateView;

class StateController {
    
    public:
        virtual void udpateModel() = 0;
        virtual void updateView() = 0;
};

#endif