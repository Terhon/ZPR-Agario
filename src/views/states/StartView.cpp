#include <states/StartView.hpp>

StartView::StartView() {
    loadBackground();
    loadText();
}

void StartView::draw(sf::RenderWindow* window)
{
    window->draw(sprite);
    window->draw(title);
    window->draw(instruction);
}

void StartView::loadBackground(){
    try {
        background.loadFromFile("resources/background.jpg");
        texture.loadFromImage(background);
        sprite.setTexture(texture, true);
    }
    catch(const std::exception& e){
        std::cout << "Failed loading background" << std::endl;
    }
}

void StartView::loadText(){
    try {
        font.loadFromFile("resources/Manjari-Thin.otf");

        title.setFont(font); 
        title.setString("Agario 2.0");
        title.setCharacterSize(50); // in pixels, not points!
        title.setFillColor(sf::Color::Black);
        title.setStyle(sf::Text::Bold);
        title.setPosition(270, 100);

        instruction.setFont(font); 
        instruction.setString("Eat balls smaller than you,\navoid those that can eat you.\nUse mouse to move.\n\nPress S to start\nIn game press P to pause");
        instruction.setCharacterSize(40); // in pixels, not points!
        instruction.setFillColor(sf::Color::Black);
    //    instruction.setStyle(sf::Text::Bold);
        instruction.setPosition(100, 220);
    }
    catch(const std::exception& e){
        std::cout << "Failed loading font" << std::endl;
    } 


}