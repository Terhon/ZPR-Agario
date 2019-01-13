#include <PauseView.hpp>

PauseView::PauseView() {
    bckgColor = sf::Color::Black;
    loadText();
}

void PauseView::draw(sf::RenderWindow* window)
{
    window->clear(bckgColor);
    window->draw(instruction);
}

void PauseView::loadText(){
    try {
        font.loadFromFile("resources/Manjari-Thin.otf");

        std::stringstream ss;
        ss << "Score: " << 0; //model.getScore() zamiast 0
        std::string s = ss.str();

        score.setFont(font); 
        score.setString(s);
        score.setCharacterSize(35); // in pixels, not points!
        score.setFillColor(sf::Color::Black);
        score.setStyle(sf::Text::Bold);
        score.setPosition(100, 120);

        instruction.setFont(font); 
        instruction.setString("Press P to resume,\nEsc to end the game.\n\nEat balls smaller than you,\navoid those that can eat you.\nUse mouse to move.");
        instruction.setCharacterSize(25); // in pixels, not points!
        instruction.setFillColor(sf::Color::Black);
    //    instruction.setStyle(sf::Text::Bold);
        instruction.setPosition(100, 240);
    }
    catch(const std::exception& e){
        std::cout << "Failed loading font" << std::endl;
    } 
}