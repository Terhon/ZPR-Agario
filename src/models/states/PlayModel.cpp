#include <states/PlayModel.hpp>
#include <states/PauseModel.hpp>
#include <states/EndModel.hpp>
#include <balls/BotModel.hpp>

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
    std::uniform_int_distribution<int> distX(-150,-50);
    std::uniform_int_distribution<int> distY(1,800);
    std::uniform_int_distribution<int> distR(10,60);

    for(int i = 0; i < 10; i++)
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
        auto consumed = (*it)->checkCollision(balls);
        if(consumed != balls->end())
        {
            (*it)->grow((*consumed)->getRadius());
            balls->erase(consumed);
            if(it == balls->end())
                break;
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
