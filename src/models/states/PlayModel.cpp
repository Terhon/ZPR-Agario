#include <states/PlayModel.hpp>
#include <states/PauseModel.hpp>
#include <states/EndModel.hpp>

PlayModel::PlayModel(App* a)
{
    app = a;
    view = new PlayView();
    controller = new PlayController(this);
    init();
}

void PlayModel::init()
{
    balls.push_back(new PlayerModel());
    for(int i = 0; i < 4; i++)
        balls.push_back(new BotModel());

    for(int i = 0; i < 10; i++)
        balls.push_back(new FoodModel());
}

void PlayModel::update()
{
    for(auto it = balls.begin(); it != balls.end();)
    {
        if((*it).collides(balls))
            balls.erase(it);
        else
        {
            (*it).update();
            ++it;
        }

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
