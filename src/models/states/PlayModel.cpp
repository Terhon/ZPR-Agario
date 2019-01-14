#include <states/PlayModel.hpp>
#include <states/PauseModel.hpp>
#include <states/EndModel.hpp>

PlayModel::PlayModel(App* a)
{
    app = a;
    view = new PlayView();
    controller = new PlayController(this);
}

void PlayModel::update()
{

}

void PlayModel::pushPause()
{
    app->pushStack(new PauseModel(app));
}

void PlayModel::pushEnd()
{
    app->pushStack(new EndModel(app));
}