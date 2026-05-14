#include "Button.hpp"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>

Button::Button(sf::Font &font, std::string str, float x, float y) {
  shape.setSize(sf::Vector2f(400, 80));
  shape.setFillColor(sf::Color(70, 70, 200));
  shape.setPosition(x, y);
  text.setFont(font);
  text.setString(str);
  text.setCharacterSize(32);
  text.setPosition(x + 20, y + 20);
}
bool Button::isClicked(sf::Vector2f mousePos) {
  return shape.getGlobalBounds().contains(mousePos);
}

void Button::render(sf::RenderWindow &window) {
  window.draw(shape);
  window.draw(text);
}
