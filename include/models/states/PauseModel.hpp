#ifndef AGARIO_PAUSEMODEL_HPP
#define AGARIO_PAUSEMODEL_HPP

#include <states/StateModel.hpp>
#include <states/PauseView.hpp>
#include <states/PauseController.hpp>

class PauseModel : public StateModel
{
    public:
    PauseModel(App* a);
    virtual void update();

    void popPause();
    void resetGame();
    void endGame();
};

#endif //AGARIO_PAUSEMODEL_HPP
