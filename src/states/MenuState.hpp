#include "../ui/Button.hpp"
#include "State.hpp"
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

class MenuState : public State {
private:
  sf::Font font;

  Button *startButton;

public:
  MenuState();

  void handleEvent(sf::Event &event) override;
  void update(float dt) override;
  void render(sf::RenderWindow &window) override;
};
