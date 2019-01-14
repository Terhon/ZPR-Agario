#include <states/PlayModel.hpp>
#include <states/PauseModel.hpp>
#include <states/EndModel.hpp>
#include <balls/PlayerModel.hpp>

PlayModel::PlayModel(App* a)
{
    app = a;
    view = new PlayView(this);
    controller = new PlayController(this);
    balls = new std::vector<BallModel*>;
    init();
}

void PlayModel::init()
{
    balls->push_back(new PlayerModel(100,100,1));
 /*   for(int i = 0; i < 4; i++)
        balls->push_back(new BotModel());

    for(int i = 0; i < 10; i++)
        balls->push_back(new FoodModel());*/
}

void PlayModel::update()
{
    for(auto it = balls->begin(); it != balls->end();++it)
    {
        (*it)->update();

    }
}

void PlayModel::pushPause()
{
    app->pushStack(new PauseModel(app));
}

void PlayModel::pushEnd()
{
    app->pushStack(new EndModel(app));
}
