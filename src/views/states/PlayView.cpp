#include <states/PlayView.hpp>

PlayView::PlayView(PlayModel* m):StateView(m) {
    bckgColor = sf::Color::Black;
    loadText();
}

void PlayView::draw(sf::RenderWindow* window)
{
    window->clear(sf::Color(160, 141, 158));
    window->draw(instruction);

    auto l = dynamic_cast<PlayModel*> (model)->getBalls();
    for(auto it = l->begin(); it != l->end();++it)
    {
        (*it)->getView()->draw(window);
    }
}

void PlayView::loadText(){
    try {
        font.loadFromFile("resources/Manjari-Thin.otf");

        instruction.setFont(font);
        instruction.setString("Press P to pause");
        instruction.setCharacterSize(10); // in pixels, not points!
        instruction.setFillColor(sf::Color::Black);
        instruction.setStyle(sf::Text::Bold);
        instruction.setPosition(5, 5);
    }
    catch(const std::exception& e){
        std::cout << "Failed loading font" << std::endl;
    }
}

