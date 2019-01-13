#ifndef STARTVIEW_HPP
#define STARTVIEW_HPP

#include <StateView.hpp>
#include <iostream>

class GameView : public StateView {
    private:
    sf::Color bckgColor;
    sf::Font font;
    sf::Text instruction;
    
    public:
    virtual void draw(sf::RenderWindow* window);
    void loadText();
    GameView();
};

#endif