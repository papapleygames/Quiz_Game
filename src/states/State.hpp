#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

class State {
public:
  virtual void handleEvent(sf::Event &event) = 0;
  virtual void update(float dt) = 0;
  virtual void render(sf::RenderWindow &window) = 0;
  virtual ~State() {}
};