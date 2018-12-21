#ifndef STATEMODEL_HPP
#define STATEMODEL_HPP

#include <StateView.hpp>

class StateModel 
{   
    protected:
    StateView* view;

    public:
    virtual void update() = 0;
    virtual StateView* getView(){return view;};
};

#endif 