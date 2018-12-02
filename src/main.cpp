#include <iostream>
#include <App.hpp>
#include <SFML/Window.hpp>

int main(int argc, char const *argv[])
{
    sf::Window a(sf::VideoMode(800, 600), "My window");
    char b;
    std::cin>>b;
    a.close();
    App app;
    app.test();
    return 0;
}
