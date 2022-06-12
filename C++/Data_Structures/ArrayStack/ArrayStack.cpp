// Template Array Stack implementation
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 -  Initial Version

#include "ArrayStack.h"
#include "../../Exceptions/StackFull/StackFull.h"
#include "../../Exceptions/StackEmpty/StackEmpty.h"

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
        throw StackEmpty("top of empty stack");
    }
    return array[t];
}

template <typename T>
void ArrayStack<T>::push(const T &e) {
    if(size() == capacity){
        throw StackFull("pushing onto full stack");
    }
    array[++t] = e;
}

template <typename T>
void ArrayStack<T>::pop() {
    if(empty()){
        throw StackEmpty("popping out of empty stack");
    }
    --t;
}