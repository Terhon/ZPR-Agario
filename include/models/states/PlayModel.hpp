#ifndef AGARIO_PLAYMODEL_HPP
#define AGARIO_PLAYMODEL_HPP

#include <states/StateModel.hpp>
#include <states/PlayView.hpp>
#include <states/PlayController.hpp>
#include <balls/BallModel.hpp>
#include <vector>

class BallModel;

class PlayModel : public StateModel
{
private:
    std::vector<BallModel*>* balls;

public:
    PlayModel(App* a);
    virtual void update();

    std::vector<BallModel*>* getBalls(){return balls;}

    void init();
    void pushPause();
    void pushEnd();
};

#endif //AGARIO_PLAYMODEL_HPP
