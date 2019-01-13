#ifndef STARTVIEW_HPP
#define STARTVIEW_HPP

#include <StateView.hpp>
#include <iostream>

class StartView : public StateView
{
    private:
    sf::Image background;
    sf::Texture texture;
    sf::Sprite sprite;
    sf::Font font;
    sf::Text title;
    sf::Text instruction;
    
    public:
    virtual void draw(sf::RenderWindow* window);
    void loadBackground();
    void loadText();
    StartView();
};

#endif