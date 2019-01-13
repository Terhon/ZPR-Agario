#ifndef STARTMODEL_HPP
#define STARTMODEL_HPP

#include <StateModel.hpp>
#include <StartView.hpp>
#include <StartController.hpp>

class StartModel : public StateModel 
{
    public:
    StartModel(App* a);
    virtual void update();

    void pushPlay();
};

#endif