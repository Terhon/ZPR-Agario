#ifndef STARTVIEW_HPP
#define STARTVIEW_HPP

#include <states/StateView.hpp>
#include <states/StartModel.hpp>
#include <iostream>

class StartModel;

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

    StartView(StartModel* m);
};

#endif