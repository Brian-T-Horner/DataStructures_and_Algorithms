// Template Singly Linked List Implementation
//
// Author: Brian Horner
// Edit History:
// 6/6/2022 - Initial Version


#include "SinglyLinkedList.h"
#include "SNode.h"

template <typename T>
SinglyLinkedList<T>::SinglyLinkedList<typename T>() {
    head = nullptr;
}

template <typename T>
SinglyLinkedList<T>::~SinglyLinkedList<T>() {
    while(!empty()){
        removeNode();
    }
}

template <typename T>
bool SinglyLinkedList<T>::empty() const{return head == nullptr;}

template <typename T>
const T &SinglyLinkedList<T>::head() const {return head->data;}

template<typename T>
void SinglyLinkedList<T>::addNode(const T &e) {
    SNode<T>* newNode = new SNode<T>;
    newNode->data = e;
    newNode->next = head;
    head = newNode;
}

template<typename T>
void SinglyLinkedList<T>::removeNode() {
    SNode<T>* old = head;
    head = old->next;
    delete old;
}