//
// Created by Yurii Kulakovskyi on 09.04.2025.
//

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef int Info;

struct Elem {
  Info info;
  Elem* link;

  int value;
  bool operator==(int other) const {
    return value == other;
  }
};

void insert(Elem*& L, Info value);
void display(const Elem* L);
void clear(Elem*& L);
void swapPairs(Elem*& L);

#endif //FUNCTIONS_H
