// Stack with deque adapter (or wrapper) implementation
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#include "DequeStack.h"
#include <iostream>

template <typename T>
DequeStack<T>::DequeStack(): deque() {}

template <typename T>
DequeStack<T>::~DequeStack() {}

template <typename T>
int DequeStack<T>::size() const {return deque.size();}

template <typename T>
bool DequeStack<T>::empty() const {return deque.empty();}

template <typename T>
const T& DequeStack<T>::top() const {
    if(empty()){
        std::cout << "StackEmpty exception thrown here."<<std::endl;
    }
    return deque.front();
}

template <typename T>
void DequeStack<T>::push(const T &e) {
    deque.insertFront(e);
}

template <typename T>
void DequeStack<T>::pop(){
    if(empty()){
        std::cout << "StackEmpty exception thrown here." <<std::endl;
    }
    deque.removeFront();
}