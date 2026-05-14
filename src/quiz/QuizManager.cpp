#include "QuizManager.hpp"
#include "Question.hpp"

QuizManager::QuizManager() {
  currentQuestion = 0;
  score = 0;
  loadQuestion();
}

void QuizManager::loadQuestion() {
  Question q1;

  q1.question = "Capital of india?";

  q1.options[0] = "Delhi";
  q1.options[1] = "Mumbai";
  q1.options[2] = "Chennai";
  q1.options[3] = "Kolkata";

  q1.correctAnswer = 0;

  questions.push_back(q1);
}

Question &QuizManager::getCurrentQuestion() {
  return questions[currentQuestion];
}

void QuizManager::answer(int option) {
  if (option == questions[currentQuestion].correctAnswer) {
    score++;
  }
  currentQuestion++;
}

bool QuizManager::finished() { return currentQuestion >= questions.size(); }

int QuizManager::getScore() { return score; }