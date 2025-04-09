#include <iostream>
#include "./functions/functions.h"

using namespace std;

// Основна функція
int main() {
  Elem* L = NULL;

  // Формування списку
  insert(L, 1);
  insert(L, 2);
  insert(L, 3);
  insert(L, 4);
  insert(L, 5);
  insert(L, 6);
  insert(L, 7);

  cout << "Початковий список: ";
  display(L);

  // Виконання обміну
  swapPairs(L);

  cout << "Після обміну попарно: ";
  display(L);

  // Очищення пам'яті
  clear(L);

  return 0;
}
