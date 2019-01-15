#ifndef ENDMODEL_HPP
#define ENDMODEL_HPP

#include <states/StateModel.hpp>
#include <states/EndView.hpp>
#include <states/EndController.hpp>

class EndModel : public StateModel {
private:
    int score;

public:
    EndModel(App *a, int s);

    virtual void update();

    int getScore() { return score; }

    void resetGame();

    void exitGame();
};

#endif