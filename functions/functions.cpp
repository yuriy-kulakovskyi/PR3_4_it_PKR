#include <iostream>
#include "functions.h"

using namespace std;

// Функція вставки елемента в кінець кільцевого списку
void insert(Elem*& L, Info value) {
  Elem* tmp = new Elem{ value, nullptr };
  if (L != NULL) {
    Elem* T = L;
    while (T->link != L)
      T = T->link;
    T->link = tmp;
    tmp->link = L;
  }
  else {
    L = tmp;
    L->link = L;
  }
}

// Функція виводу списку
void display(const Elem* L) {
  if (L == NULL) {
    cout << "Список порожній" << endl;
    return;
  }

  const Elem* tmp = L;
  do {
    cout << tmp->info << " ";
    tmp = tmp->link;
  } while (tmp != L);
  cout << endl;
}

// Функція очищення списку
void clear(Elem*& L) {
  if (L == NULL) return;

  Elem* first = L;
  Elem* current = L->link;

  while (current != first) {
    Elem* temp = current;
    current = current->link;
    delete temp;
  }

  delete first;
  L = NULL;
}

// Функція, яка міняє місцями елементи попарно
void swapPairs(Elem*& L) {
  if (!L || L->link == L) return; // 0 або 1 елемент

  Elem* current = L;
  do {
    Elem* next = current->link;
    if (next == L) break; // непарна кількість, останній не має пари

    // Обмін значень
    swap(current->info, next->info);

    // Перехід до наступної пари
    current = next->link;
  } while (current != L);
}