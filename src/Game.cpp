#include "Game.hpp"
#include "states/QuizState.hpp"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/VideoMode.hpp>

Game::Game() : window(sf::VideoMode(1280, 720), "Quiz Game") {
  window.setFramerateLimit(60);
  currentState = new QuizState();
}

void Game::run() {
  while (window.isOpen()) {
    sf::Event event;

    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window.close();
      }
      currentState->handleEvent(event);
    }
    currentState->update(0.f);

    window.clear(sf::Color::Black);
    currentState->render(window);

    window.display();
  }
}