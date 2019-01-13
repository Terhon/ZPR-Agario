#include <PauseView.hpp>

PauseView::PauseView() {
    loadBackground();
    loadText();
}

void PauseView::draw(sf::RenderWindow* window)
{
    window->draw(sprite);
    window->draw(title);
    window->draw(instruction);
}

void PauseView::loadBackground(){
    try {
        background.loadFromFile("resources/background.jpg");
        texture.loadFromImage(background);
        sprite.setTexture(texture, true);
    }
    catch(const std::exception& e){
        std::cout << "Failed loading background" << std::endl;
    }
}

void PauseView::loadText(){
    try {
        font.loadFromFile("resources/Manjari-Thin.otf");

        title.setFont(font);
        title.setString("Pause");
        title.setCharacterSize(50); // in pixels, not points!
        title.setFillColor(sf::Color::Black);
        title.setStyle(sf::Text::Bold);
        title.setPosition(100, 100);

        instruction.setFont(font);
        instruction.setString("Press P to unpause\nPress R to restart");
        instruction.setCharacterSize(40); // in pixels, not points!
        instruction.setFillColor(sf::Color::Black);
        //instruction.setStyle(sf::Text::Bold);
        instruction.setPosition(100, 220);
    }
    catch(const std::exception& e){
        std::cout << "Failed loading font" << std::endl;
    }


}