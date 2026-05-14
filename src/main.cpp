#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <iostream>

int main() {
  sf::RenderWindow window(sf::VideoMode(800, 600), "Quiz_Game");

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }

    window.clear();

    // draw your stuff

    window.display();
  }

  return 0;
}
