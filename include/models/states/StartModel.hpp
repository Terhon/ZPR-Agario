#ifndef STARTMODEL_HPP
#define STARTMODEL_HPP

#include <states/StateModel.hpp>
#include <states/StartView.hpp>
#include <states/StartController.hpp>

class StartModel : public StateModel {
public:
    StartModel(App *a);

    virtual void update();

    void pushPlay();
};

#endif