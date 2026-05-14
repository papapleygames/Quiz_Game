#include "MenuState.hpp"

MenuState::MenuState() {
  font.loadFromFile("assets/font/ARIAL.TTF");
  startButton = new Button(font, "Start Quiz", 400, 300);
}

void MenuState::handleEvent(sf::Event &event) {}

void MenuState::update(float dt) {}

void MenuState::render(sf::RenderWindow &window) {
  startButton->render(window);
}