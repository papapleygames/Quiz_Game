#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/System/Vector2.hpp>

class Button {
private:
  sf::RectangleShape shape;

  sf::Text text;

public:
  Button(sf::Font &font, std::string str, float x, float y);

  bool isClicked(sf::Vector2f mousePos);
  void render(sf::RenderWindow &window);
};