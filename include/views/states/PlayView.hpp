#ifndef AGARIO_PLAYVIEW_HPP
#define AGARIO_PLAYVIEW_HPP

#include <states/StateView.hpp>
#include <states/PlayModel.hpp>
#include <iostream>

class PlayModel;

class PlayView : public StateView {
private:
    sf::Color bckgColor;
    sf::Font font;
    sf::Text instruction;

public:
    virtual void draw(sf::RenderWindow *window);

    void loadText();

    PlayView(PlayModel *m);
};

#endif //AGARIO_PLAYVIEW_HPP
