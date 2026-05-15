#include "MenuState.hpp"
#include <iostream>

MenuState::MenuState() {
  if (!font.loadFromFile("assets/fonts/DejaVuSans.ttf")) {
    std::cout << "Failed to load font\n";
  }
  startButton = new Button(font, "Start Quiz", 400, 300);
}

void MenuState::handleEvent(sf::Event &event) {}

void MenuState::update(float dt) {}

void MenuState::render(sf::RenderWindow &window) {
  startButton->render(window);
}