#ifndef STATEMODEL_HPP
#define STATEMODEL_HPP

#include <StateView.hpp>
#include <StateController.hpp>
#include <App.hpp>

class StateModel 
{   
    protected:
    App* app;
    StateView* view;
    StateController* controller;

    public:
    virtual void update() = 0;
    virtual StateView* getView(){return view;}
    virtual StateController* getController(){return controller;}
};

#endif 