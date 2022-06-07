// Template Circularly Linked List Specification
//
// Author: Brian Horner
// Edit History:
// 6/6/2022 - Initial Version

#include "CircularlyLinkedList.h"
#include "CNode.h"

template <typename T> // Constructor
CircularlyLinkedList<T>::CircularlyLinkedList<T>() {cursor= nullptr;}

template<typename T> // Destructor
CircularlyLinkedList<T>::~CircularlyLinkedList() {
    while(!empty()){
        removeNode();
    }
}

template<typename T> // Check if empty
bool CircularlyLinkedList<T>::empty() const {return cursor == nullptr;}

template<typename T> // Return element following cursor
const T& CircularlyLinkedList<T>::front() const {return cursor->next->data;}

template<typename T> // Return element at cursor
const T& CircularlyLinkedList<T>::back() const {return cursor->data;}

template <typename T> // Move cursor up one node
void CircularlyLinkedList<T>::advance() {cursor=cursor->next;}

template <typename T> // Add node after cursor
void CircularlyLinkedList<T>::add(const T &e) {
    CNode<T> * newNode = new CNode<T>;
    newNode ->data = e;
    if(cursor ==nullptr){
        cursor = newNode;
        newNode->next = newNode;
    }else{
        newNode->next = cursor->next;
        cursor->next = newNode;
    }
}

template <typename T>
void CircularlyLinkedList<T>::removeNode() {
    CNode<T> * old = cursor->next;
    if(old == cursor){
        cursor= nullptr;
    }else{
        cursor->next = old->next;
    }
    delete old;
}