#ifndef AGARIO_BOTVIEW_HPP
#define AGARIO_BOTVIEW_HPP

#include <balls/BallView.hpp>
#include <balls/BotModel.hpp>

class BotModel;

class BotView : public BallView {
public:
    BotView(BotModel* m, sf::Color* c);

};

#endif