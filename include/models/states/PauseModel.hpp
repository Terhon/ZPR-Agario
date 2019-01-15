#ifndef AGARIO_PAUSEMODEL_HPP
#define AGARIO_PAUSEMODEL_HPP

#include <states/StateModel.hpp>
#include <states/PauseView.hpp>
#include <states/PauseController.hpp>

class PauseModel : public StateModel {
private:
    int score;

public:
    PauseModel(App *a, int s);

    virtual void update();

    int getScore() { return score; }

    void popPause();

    void resetGame();

    void endGame();
};

#endif //AGARIO_PAUSEMODEL_HPP
