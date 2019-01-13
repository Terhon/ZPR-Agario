#include <EndView.hpp>

EndView::EndView() {
    loadBackground();
    loadText();
}

void EndView::draw(sf::RenderWindow* window)
{
    window->draw(sprite);
    window->draw(score);
    window->draw(instruction);
}

void EndView::loadBackground(){
    try {
        background.loadFromFile("resources/background.jpg");
        texture.loadFromImage(background);
        sprite.setTexture(texture, true);
    }
    catch(const std::exception& e){
        std::cout << "Failed loading background" << std::endl;
    }
}

void EndView::loadText(){
    try {
        font.loadFromFile("resources/Manjari-Thin.otf");

        std::stringstream ss;
        ss << "Score: " << 0; //model.getScore() zamiast 0
        std::string s = ss.str();

        score.setFont(font); 
        score.setString(s);
        score.setCharacterSize(45); // in pixels, not points!
        score.setFillColor(sf::Color::Black);
        score.setStyle(sf::Text::Bold);
        score.setPosition(270, 120);

        instruction.setFont(font); 
        instruction.setString("Press R to play again,\nEsc to close\n");
        instruction.setCharacterSize(40); // in pixels, not points!
        instruction.setFillColor(sf::Color::Black);
    //    instruction.setStyle(sf::Text::Bold);
        instruction.setPosition(100, 240);
    }
    catch(const std::exception& e){
        std::cout << "Failed loading font" << std::endl;
    } 


}