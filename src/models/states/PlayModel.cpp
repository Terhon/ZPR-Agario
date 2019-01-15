#include <states/PlayModel.hpp>
#include <states/PauseModel.hpp>
#include <states/EndModel.hpp>
#include <balls/PlayerModel.hpp>
#include <balls/BotModel.hpp>
#include <random>

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
    balls->push_back(new PlayerModel(570,370,30));

    std::default_random_engine gen(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> distX(100,1100);
    std::uniform_int_distribution<int> distY(100,800);
    std::uniform_int_distribution<int> distR(20,50);

    for(int i = 0; i < 4; i++)
        balls->push_back(new BotModel(distX(gen), distY(gen), distR(gen)));
/*
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
