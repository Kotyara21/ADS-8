// Copyright 2021 NNTU-CS
#include "train.h"
#include "train.h"

int main() {
  Train train;
  train.addCage(true);
  train.addCage(false);
  train.addCage(true);
  std::cout << "Lenght of the train: " << train.getLenght() << std::endl;
  return 0;
}
