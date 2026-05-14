#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>

class Game {
private:
  sf::RenderWindow window;

public:
  Game();
  void run();
};