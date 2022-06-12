// Template Array Stack implementation
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 -  Initial Version

#include "ArrayStack.h"
#include <iostream>

template <typename T>
ArrayStack<T>::ArrayStack(int capacity): array(new T[capacity]), capacity
(capacity), t(-1){}

template<typename T>
ArrayStack<T>::~ArrayStack(){
    delete [] array;
}

template <typename T>
int ArrayStack<T>::size() const {return (t+1);}

template <typename T>
bool ArrayStack<T>::empty() const {return (t<0);}

template <typename T>
const T &ArrayStack<T>::top() const {
    if(empty()){
        std::cout << "Stack Empty exception thrown here." <<std::endl;
    }
    return array[t];
}

template <typename T>
void ArrayStack<T>::push(const T &e) {
    if(size() == capacity){
        std::cout << "Stack Full exception thrown here." <<std::endl;
    }
    array[++t] = e;
}

template <typename T>
void ArrayStack<T>::pop() {
    if(empty()){
        std::cout << "Stack Empty exception thrown here" <<std::endl;
    }
    --t;
}