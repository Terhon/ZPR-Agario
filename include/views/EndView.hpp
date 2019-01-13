#ifndef STARTVIEW_HPP
#define STARTVIEW_HPP

#include <StateView.hpp>
#include <iostream>
#include <sstream>
#include <string>

class EndView : public StateView {
    private:
    sf::Image background;
    sf::Texture texture;
    sf::Sprite sprite;
    sf::Font font;
    sf::Text score;
    sf::Text instruction;
    
    public:
    virtual void draw(sf::RenderWindow* window);
    void loadBackground();
    void loadText();
    EndView();
};

#endif