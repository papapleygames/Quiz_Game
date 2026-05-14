#pragma once

#include <string>

struct Question {
  std::string question;
  std::string options[4];

  int correctAnswer;
};