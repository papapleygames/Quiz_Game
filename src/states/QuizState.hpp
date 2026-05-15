#pragma once

#include "State.hpp"

#include "../quiz/QuizManager.hpp"
#include "../ui/Button.hpp"
#include <SFML/Graphics/Font.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Window/Event.hpp>

class QuizState : public State {
private:
  sf::Font font;

  QuizManager quizManager;

  sf::Text questionText;

  Button *answerButton[4];

public:
  QuizState();

  void loadQuestion();

  void handleEvent(sf::Event &event) override;

  void update(float dt) override;

  void render(sf::RenderWindow &window) override;
};