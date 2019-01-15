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
    foods = 10;
}

void PlayModel::init()
{
    balls->push_back(new PlayerModel(570,370,30));

    throwBots(10);
    throwFood(10);

}

void PlayModel::update()
{

    for(auto it = balls->begin(); it != balls->end();++it)
    {
        if ((*it)->getRadius() > 9)
          (*it)->update();

        auto consumed = (*it)->checkCollision(balls);
        if(consumed != balls->end())
        {
            (*it)->grow((*consumed)->getRadius());
            if((*consumed)->getRadius() <= 9) {
              --foods;
            }
            delete(*consumed);
            balls->erase(consumed);
            if(it == balls->end())
                break;
        }
    }

    if (foods < 5){
        std::default_random_engine gen(std::chrono::system_clock::now().time_since_epoch().count());
        std::uniform_int_distribution<int> dist(-10,10);

        if(dist(gen) > 0){
          throwFood(5);
        }
        else {
          throwBots(2);
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

void PlayModel::throwFood(int n) {
    std::default_random_engine gen(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> distX(0, 1200);
    std::uniform_int_distribution<int> distY(0, 800);

    for (int i = 0; i < n; ++i) {
        balls->push_back(new BotModel(distX(gen), distY(gen), 9));
        ++foods;
    }
}

void PlayModel::throwBots(int n){
  std::default_random_engine gen(std::chrono::system_clock::now().time_since_epoch().count());
  std::uniform_int_distribution<int> distX(-150,-50);
  std::uniform_int_distribution<int> distY(1,800);
  std::uniform_int_distribution<int> distR(10,60);

  for(int i = 0; i < n; i++)
      balls->push_back(new BotModel(distX(gen), distY(gen), distR(gen)));
}
