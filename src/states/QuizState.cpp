#include "QuizState.hpp"
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Event.hpp>
#include <iostream>

QuizState::QuizState() {
  if (!font.loadFromFile("assets/fonts/DejaVuSans.ttf")) {
    std::cout << "Failed to load font\n";
  }
  questionText.setFont(font);

  questionText.setCharacterSize(32);

  questionText.setPosition(100, 100);

  for (int i = 0; i < 4; i++) {
    answerButton[i] = nullptr;
  }

  loadQuestion();
}

void QuizState::loadQuestion() {
  Question &q = quizManager.getCurrentQuestion();
  questionText.setString(q.question);

  for (int i = 0; i < 4; i++) {
    if (answerButton[i] != nullptr) {
      delete answerButton[i];
    }

    answerButton[i] = new Button(font, q.options[i], 200, 250 + (i * 120));
  }
}

void QuizState::handleEvent(sf::Event &event) {
  if (event.type == sf::Event::MouseButtonPressed) {
    sf::Vector2f mousePos(event.mouseButton.x, event.mouseButton.y);

    for (int i = 0; i < 4; i++) {
      if (answerButton[i]->isClicked(mousePos)) {
        quizManager.answer(i);

        if (!quizManager.finished()) {
          loadQuestion();
        } else {
          std::cout << "final Score: " << quizManager.getScore() << std::endl;
        }
      }
    }
  }
}

void QuizState::update(float dt) {}

void QuizState::render(sf::RenderWindow &window) {
  window.draw(questionText);

  for (int i = 0; i < 4; i++) {
    answerButton[i]->render(window);
  }
}