#ifndef STARTVIEW_HPP
#define STARTVIEW_HPP

#include <states/StateView.hpp>
#include <states/EndModel.hpp>
#include <iostream>
#include <sstream>
#include <string>

class EndModel;

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
    EndView(EndModel* model);
};

#endif