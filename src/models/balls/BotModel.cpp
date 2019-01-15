#include <balls/BotModel.hpp>
#include <balls/BotView.hpp>
#include <balls/BotController.hpp>

BotModel::BotModel(int x, int y, int r):BallModel(x,y,r)
{
    view = new BotView(this, new sf::Color(0,0,100));
    controller = new BotController(this);
}

void BotModel::update()
{
    x+=velocity;
    keepInWindow();
}