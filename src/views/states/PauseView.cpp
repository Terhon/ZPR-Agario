#include <states/PauseView.hpp>

PauseView::PauseView(PauseModel* m):StateView(m) {
    loadText();
}

void PauseView::draw(sf::RenderWindow* window)
{
    window->clear(sf::Color(221, 117, 161));
    window->draw(score);
    window->draw(instruction);
}

void PauseView::loadText(){
    try {
        font.loadFromFile("resources/Manjari-Thin.otf");

        std::stringstream ss;
        ss << "Score: " << dynamic_cast<PauseModel*>(model)->getScore();
        std::string s = ss.str();

        score.setFont(font); 
        score.setString(s);
        score.setCharacterSize(35); // in pixels, not points!
        score.setFillColor(sf::Color(56, 48, 55));
        score.setStyle(sf::Text::Bold);
        score.setPosition(100, 120);

        instruction.setFont(font); 
        instruction.setString("Press P to resume,\nR to restart,\nEsc to end the game.\n\nEat balls smaller than you,\navoid those that can eat you.\nUse the mouse to move.");
        instruction.setCharacterSize(25); // in pixels, not points!
        instruction.setFillColor(sf::Color(56, 48, 55));
    //    instruction.setStyle(sf::Text::Bold);
        instruction.setPosition(100, 240);
    }
    catch(const std::exception& e){
        std::cout << "Failed loading font" << std::endl;
    } 
}