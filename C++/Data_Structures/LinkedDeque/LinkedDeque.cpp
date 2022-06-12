// Doubly Linked List Deque Implementation
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#include "LinkedDeque.h"

template <typename T>
LinkedDeque<T>::LinkedDeque(): numElements(0), list() {}

template <typename T>
LinkedDeque<T>::~LinkedDeque() {}

template <typename T>
int LinkedDeque<T>::size() const {return numElements;}

template <typename T>
bool LinkedDeque<T>::empty() const {return list.empty();}

template <typename T>
const T& LinkedDeque<T>::front() const {return list.front();}

template <typename T>
const T& LinkedDeque<T>::back() const {return list.back();}

template <typename T>
void LinkedDeque<T>::insertFront(const T &e) {
    list.addFront(e);
    numElements ++;
}

template <typename T>
void LinkedDeque<T>::insertBack(const T &e) {
    list.addBack(e);
    numElements++;
}

template <typename T>
void LinkedDeque<T>::removeFront() {
    list.removeFront();
    numElements--;
}

template <typename T>
void LinkedDeque<T>::removeBack() {
    list.removeBack();
    numElements--;
}