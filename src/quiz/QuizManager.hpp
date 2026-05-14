#pragma once

#include "Question.hpp"

#include <vector>

class QuizManager {
private:
  std::vector<Question> questions;

  int currentQuestion;
  int score;

public:
  QuizManager();

  void loadQuestion();

  Question &getCurrentQuestion();

  void answer(int option);

  bool finished();

  int getScore();
};