#ifndef AGARIO_PAUSEVIEW_HPP
#define AGARIO_PAUSEVIEW_HPP

#include <StateView.hpp>
#include <iostream>

class PauseView : public StateView
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
    PauseView();
};

#endif //AGARIO_PAUSEVIEW_HPP
