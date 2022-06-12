// Linked List based Stack Implementation
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version


#include "LinkedStack.h"
#include <iostream>

template <typename T>
LinkedStack<T>::LinkedStack(): list(), numElements(0){}

template <typename T>
LinkedStack<T>::~LinkedStack<T>() {}
// linked list destructor takes care of nodes

template <typename T>
int LinkedStack<T>::size() const {return numElements;}

template <typename T>
bool LinkedStack<T>::empty() const{return (numElements == 0);}

template <typename T>
T& LinkedStack<T>::peak() {
    return list.front();
}

template <typename T>
const T& LinkedStack<T>::top() const {
    if(empty()){
        std::cout << "Throw StackEmpty exception here."<<std::endl;
    }
    return list.front();
}

template <typename T>
void LinkedStack<T>::push(const T& e){
    numElements++;
    list.addNode(e);
}

template <typename T>
void LinkedStack<T>::pop(){
    list.removeNode();
}