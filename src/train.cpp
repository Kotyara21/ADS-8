// Copyright 2021 NNTU-CS
#include "train.h"

Train::Train() : first(nullptr), countOp(0) {}

void Train::addCage(bool light) {
  if (first == nullptr) {
    first = new Cage{light, nullptr, nullptr};
    first->next = first;
    first->prev = first;
  } else {
    Cage *newCage = new Cage{light, first, first->prev};
    first->prev->next = newCage;
    first->prev = newCage;
  }
}

int Train::getLength() {
  if (first == nullptr)
    return 0;
  int length = 0;
  Cage *current = first;
  do {
    length++;
    current = current->next;
  } while (current != first);
  countOp += length;
  return length;
}

int Train::getOpCount() {
  return countOp;
}
