#include <PauseModel.hpp>

PauseModel::PauseModel(App* a)
{
    app = a;
    view = new PauseView();
    controller = new PauseController(this);
}

void PauseModel::update(){
}

void PauseModel::popPause()
{
    app->popStack();
}


