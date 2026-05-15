#pragma once

#include "states/State.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

class Game {
private:
  sf::RenderWindow window;

  State *currentState;

public:
  Game();
  void run();
};