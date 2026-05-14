#include "Game.hpp"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/VideoMode.hpp>

Game::Game() : window(sf::VideoMode(1280, 720), "Quiz Game") {
  window.setFramerateLimit(60);
}

void Game::run() {
  while (window.isOpen()) {
    sf::Event event;

    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window.close();
      }
    }

    window.clear(sf::Color::Blue);

    window.display();
  }
}