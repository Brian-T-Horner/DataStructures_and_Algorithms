// Template Array Stack implementation
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 -  Initial Version
// 6/12/2022 - Added destructor, copy constructor, assignment operator and
// comparison operator

#include "ArrayStack.h"
#include "../../Exceptions/StackFull/StackFull.h"
#include "../../Exceptions/StackEmpty/StackEmpty.h"

template <typename T>
ArrayStack<T>::ArrayStack(int capacity): array(new T[capacity]), capacity
(capacity), t(-1){}

template <typename T>
ArrayStack<T>::ArrayStack(ArrayStack<T> &oldStack): array(new T[oldStack.capacity
()]), capacity(oldStack.capacity), t(oldStack.size()) {
    for (int i{0}; i<oldStack.size(); i++){
        array[i] = oldStack.array[i];
    }
}

template<typename T>
ArrayStack<T>::~ArrayStack(){
    delete [] array;
}

template <typename T>
ArrayStack<T>& ArrayStack<T>::operator=(ArrayStack<T> const &otherStack) {
    if(otherStack!=this){
        capacity = otherStack.capacity;
        t = otherStack.t;
        T* newArray = new T[capacity];
        delete [] this->array;
        for(int i{0}; i<t; i++){
            newArray[i] = otherStack.array[i];
        }
    }
    return *this;
}

template <typename T>
bool ArrayStack<T>::operator==(const ArrayStack<T> &comparisonStack) {
    if(capacity!=comparisonStack.capacity || size() != comparisonStack.size()){
        return false;
    }else{
        for(int i{0}; i<size(); i++){
            if(array[i] != comparisonStack.array[i]){
                return false;
            }
        }
        return true;
    }
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