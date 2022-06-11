// Template Doubly Linked List Implementation (with header and trailer nodes)
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version

#include "DoublyLinkedList.h"


template <typename T>
DoublyLinkedList<T>::DoublyLinkedList(){
    header= new DNode<T>;
    trailer = new DNode<T>;
    header->next = trailer;
    trailer->next = header;
}

template<typename T>
bool DoublyLinkedList<T>::empty() const {
    return(header->next == trailer);
}

template<typename T>
DoublyLinkedList<T>::~DoublyLinkedList() {
    while(!empty()){
        removeFront();
    }
    delete header;
    delete trailer;
}

template <typename T>
const T &DoublyLinkedList<T>::front() const {return header->next->data;}

template <typename T>
const T &DoublyLinkedList<T>::back() const {return trailer->prev->data;}

template <typename T>
void DoublyLinkedList<T>::addFront(const T& e){
    add(header->next, e);
}

template <typename T>
// add new node with data = e before v
void DoublyLinkedList<T>::add(DNode<T>* v, const T& e){
    DNode<T>* u = new DNode<T>; // creating new node for e
    u->elem = e; // assigning u data = e
    u->next = v; // making v new nodes successor
    u->prev = v->prev; // reassigning v predecessor to new node predecessor
    v->prev->next = u; // reassigning previous predecessor next to new node
    v->prev = u; // setting new node to be v predecessor
}

template <typename T>
void DoublyLinkedList<T>::remove(DNode<T>* v){
    DNode<T>* u = v->prev; // Set u equal to v predecessor
    DNode<T>* w = v->next; // set w equal to v successor
    u->next = w;  // replace predecessor next with v successor
    w->prev = u; // replace successor prev with predecessor
    delete v;
}

template <typename T>
void DoublyLinkedList<T>::addBack(const T& e){
    add(trailer, e);
}

template <typename T>
void DoublyLinkedList<T>::removeFront(){
    remove(header->next);
}

template <typename T>
void DoublyLinkedList<T>::removeBack(){
    remove(trailer->prev);
}