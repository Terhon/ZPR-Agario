#ifndef STARTVIEW_HPP
#define STARTVIEW_HPP

#include <states/StateView.hpp>
#include <iostream>
#include <sstream>
#include <string>


class PauseView : public StateView {
    private:
    sf::Color bckgColor;
    sf::Font font;
    sf::Text instruction;
    sf::Text score;
    
    public:
    virtual void draw(sf::RenderWindow* window);
    void loadText();
    PauseView();
};

#endif