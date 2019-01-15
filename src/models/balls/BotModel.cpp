#include <balls/BotModel.hpp>
#include <balls/BotView.hpp>
#include <balls/BotController.hpp>

using namespace std::chrono;

BotModel::BotModel(int x, int y, int r):BallModel(x,y,r)
{
    view = new BotView(this, new sf::Color(0,0,100));
    controller = new BotController(this);
    gen = new std::default_random_engine(std::chrono::system_clock::now().time_since_epoch().count());
    std::uniform_int_distribution<int> dist(0, 360);
    angle = dist(*gen);
    lastDecision = std::chrono::high_resolution_clock::now();

    velX = sin(angle)*velocity;
    velY = cos(angle)*velocity;
}

void BotModel::update()
{
    changeAngle();

    x+=velX;
    y+=velY;
    keepInWindow();
}

void BotModel::changeAngle()
{
    high_resolution_clock::time_point now = high_resolution_clock::now();
    if(duration_cast<milliseconds>(now - lastDecision) < milliseconds(100))
        return;

    lastDecision = now;
    std::normal_distribution<double> dist(0.0, 0.1);
    int i = dist(*gen) * 10;
    angle+=i;
    if(angle > 360)
        angle = angle%360;
    else if(angle<0)
        angle = 360 - angle;

    velX = sin(angle)*velocity;
    velY = cos(angle)*velocity;

}