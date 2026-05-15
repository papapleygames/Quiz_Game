#include "ResultState.hpp"
#include <iostream>
#include <string>

ResultState::ResultState(int score) {
  if (!font.loadFromFile("assets/fonts/DejaVuSans.ttf")) {
    std::cout << "Failed to load font\n";
  }

  resultText.setFont(font);
  resultText.setCharacterSize(50);
  resultText.setPosition(300, 300);
  resultText.setString("Final Score: " + std::to_string(score));
}

void ResultState::handleEvent(sf::Event &event) {}

void ResultState::update(float dt) {}

void ResultState::render(sf::RenderWindow &window) { window.draw(resultText); }