#include <balls/PlayerModel.hpp>
#include <balls/PlayerView.hpp>
#include <balls/PlayerController.hpp>

PlayerModel::PlayerModel(int x, int y, int r):BallModel(x,y,r)
{
    view = new PlayerView(this, new sf::Color(0,0,100));
    controller = new PlayerController(this);
}

void PlayerModel::update()
{
    x+=velX;
    y+=velY;

    keepInWindow();
}

std::vector<BallModel*>::iterator PlayerModel::checkCollision(std::vector<BallModel*>* v) {}