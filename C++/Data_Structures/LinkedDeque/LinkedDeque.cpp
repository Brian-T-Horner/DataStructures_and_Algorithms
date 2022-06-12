// Doubly Linked List Deque Implementation
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#include "LinkedDeque.h"
#include "../../Exceptions/DequeEmpty/DequeEmpty.h"

template <typename T>
LinkedDeque<T>::LinkedDeque(): numElements(0), list() {}

template <typename T>
LinkedDeque<T>::~LinkedDeque() {}

template <typename T>
int LinkedDeque<T>::size() const {return numElements;}

template <typename T>
bool LinkedDeque<T>::empty() const {return list.empty();}

template <typename T>
const T& LinkedDeque<T>::front() const {
    if(empty()){
        throw DequeEmpty("front of empty deque");
    }
    return list.front();
}

template <typename T>
const T& LinkedDeque<T>::back() const {
    if(empty()){
        throw DequeEmpty("back of empty deque");
    }
    return list.back();
}

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
    if(empty()){
        throw DequeEmpty("removing front of empty deque");
    }
    list.removeFront();
    numElements--;
}

template <typename T>
void LinkedDeque<T>::removeBack() {
    if(empty()){
        throw DequeEmpty("removing back of empty deque");
    }
    list.removeBack();
    numElements--;
}