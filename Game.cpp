#include <SFML/Graphics.hpp>
#include<iostream>
#include <filesystem>

int main() {
    std::cout << "Current path: " << std::filesystem::current_path() << std::endl;
    sf::RenderWindow window(sf::VideoMode(800, 600), "マリオ風ゲーム");
    sf::Texture texture;
    /*if (!texture.loadFromFile("resources/mario.png")) {
        return -1;
    }*/
    sf::Sprite sprite(texture);
    sprite.setPosition(100.f, 100.f);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);
        window.draw(sprite);
        window.display();
    }

    return 0;
}