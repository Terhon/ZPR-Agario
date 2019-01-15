#ifndef AGARIO_PLAYMODEL_HPP
#define AGARIO_PLAYMODEL_HPP

#include <states/StateModel.hpp>
#include <states/PlayView.hpp>
#include <states/PlayController.hpp>
#include <balls/BallModel.hpp>
#include <balls/PlayerModel.hpp>
#include <vector>
#include <ctime>

class BallModel;

class PlayModel : public StateModel {
private:
    std::vector<BallModel *> *balls;
    int foods;

public:
    PlayModel(App *a);

    virtual void update();

    std::vector<BallModel *> *getBalls() { return balls; }

    int getScore();

    void init();

    void pushPause();

    void pushEnd();

    void throwFood(int n);

    void throwBots(int n);
};

#endif //AGARIO_PLAYMODEL_HPP
