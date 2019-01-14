#ifndef ENDMODEL_HPP
#define ENDMODEL_HPP

#include <states/StateModel.hpp>
#include <states/EndView.hpp>
#include <states/EndController.hpp>

class EndModel : public StateModel 
{
    public:
    EndModel(App* a);
    virtual void update();

    void resetGame();
    void exitGame();
};

#endif