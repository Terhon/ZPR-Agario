#ifndef STARTMODEL_HPP
#define STARTMODEL_HPP

#include <StateModel.hpp>
#include <StartView.hpp>

class StartModel : public StateModel 
{
    public:
    StartModel(){view = new StartView();}
    virtual void update();
};

#endif