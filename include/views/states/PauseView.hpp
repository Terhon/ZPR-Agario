#ifndef STARTVIEW_HPP
#define STARTVIEW_HPP

#include <states/StateView.hpp>
#include <states/PauseModel.hpp>
#include <iostream>
#include <sstream>
#include <string>

class PauseModel;

class PauseView : public StateView {
private:
    sf::Color *bckgColor;
    sf::Font font;
    sf::Text instruction;
    sf::Text score;

public:
    virtual void draw(sf::RenderWindow *window);

    void loadText();

    void updateScore();

    PauseView(PauseModel *m);
};

#endif