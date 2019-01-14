#ifndef AGARIO_PLAYMODEL_HPP
#define AGARIO_PLAYMODEL_HPP

#include <states/StateModel.hpp>
#include <states/PlayView.hpp>
#include <states/PlayController.hpp>

class PlayModel : public StateModel
{
public:
    PlayModel(App* a);
    virtual void update();

    void pushPause();
    void pushEnd();
};

#endif //AGARIO_PLAYMODEL_HPP
