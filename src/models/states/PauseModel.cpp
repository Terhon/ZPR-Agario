#include <states/PauseModel.hpp>
#include <states/StartModel.hpp>

PauseModel::PauseModel(App* a)
{
    app = a;
    view = new PauseView();
    controller = new PauseController(this);
}

void PauseModel::update()
{

}

void PauseModel::popPause()
{
    app->popStack();
}

void PauseModel::resetGame()
{
    while(app->stackSize() > 0)
        app->popStack();
    app->pushStack(new StartModel(app));
}


