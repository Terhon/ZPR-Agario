#ifndef AGARIO_PAUSEMODEL_HPP
#define AGARIO_PAUSEMODEL_HPP

#include <StateModel.hpp>
#include <PauseView.hpp>
#include <PauseController.hpp>

class PauseModel : public StateModel
{
    public:
    PauseModel(App* a);
    virtual void update();

    void popPause();
};

#endif //AGARIO_PAUSEMODEL_HPP
