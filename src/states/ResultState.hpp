#pragma once

#include "State.hpp"
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Window/Event.hpp>

class ResultState : public State {
private:
  sf::Font font;

  sf::Text resultText;

public:
  ResultState(int score);

  void handleEvent(sf::Event &event) override;

  void update(float dt) override;

  void render(sf::RenderWindow &window) override;
};