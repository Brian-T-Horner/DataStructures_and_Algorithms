// Linked List based Stack Implementation
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version
// 6/12/2022 - Added template for copy constructor, assignment operator and
// equality operator


#include "LinkedStack.h"
#include "../../Exceptions/StackEmpty/StackEmpty.h"

template <typename T>
LinkedStack<T>::LinkedStack(): list(), numElements(0){}

template <typename T>
LinkedStack<T>::LinkedStack(LinkedStack<T> const & oldStack){
    //TODO::
}

template <typename T>
LinkedStack<T>& LinkedStack<T>::operator=(LinkedStack<T> const & oldStack){
    //TODO::
}

template <typename T>
bool LinkedStack<T>::operator==(LinkedStack<T> const & comparisonStack){
    //TODO::
}

template <typename T>
LinkedStack<T>::~LinkedStack<T>() {
    while(!empty()){
        pop();
    }
}


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
        throw StackEmpty("top of empty stack");
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
    if(empty()){
        throw StackEmpty("popping off of empty stack");
    }
    list.removeNode();
}