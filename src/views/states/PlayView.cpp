#include <states/PlayView.hpp>

PlayView::PlayView() {
    bckgColor = sf::Color::Black;
    loadText();
}

void PlayView::draw(sf::RenderWindow* window)
{
    window->clear(bckgColor);
    window->draw(instruction);
}

void PlayView::loadText(){
    try {
        font.loadFromFile("resources/Manjari-Thin.otf");

        instruction.setFont(font);
        instruction.setString("Press P to pause");
        instruction.setCharacterSize(10); // in pixels, not points!
        instruction.setFillColor(sf::Color::Red);
        instruction.setStyle(sf::Text::Bold);
        instruction.setPosition(5, 5);
    }
    catch(const std::exception& e){
        std::cout << "Failed loading font" << std::endl;
    }
}

