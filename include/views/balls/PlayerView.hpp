#ifndef AGARIO_PLAYERVIEW_HPP
#define AGARIO_PLAYERVIEW_HPP

#include <balls/BallView.hpp>
#include <balls/PlayerModel.hpp>

class PlayerView : public BallView{
private:
public:
    PlayerView(PlayerModel * m, sf::Color * c);
    virtual void draw(sf::RenderWindow* window);
};

#endif