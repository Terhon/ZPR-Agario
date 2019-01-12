#ifndef STATECONTROLLER_HPP
#define STATECONTROLLER_HPP

class StateModel;
class StateView;

class StateController 
{    
    protected:
    StateModel* model;

    public:
    virtual void updateModel() = 0;
};

#endif