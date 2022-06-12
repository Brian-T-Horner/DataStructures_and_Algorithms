// Node List class implementation
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#include "NodeList.h"

template <typename T>
NodeList<T>::NodeList() {
    numElements = 0;
    header = new LNode<T>;
    trailer = new LNode<T>;
    header->next = trailer;
    trailer->prev = header;
}

template <typename T>
NodeList<T>::~NodeList() {
    while(!empty()){
        eraseFront();
    }
}

template <typename T>
int NodeList<T>::size() const {return numElements;}

template <typename T>
bool NodeList<T>::empty() const {return numElements==0;}

template <typename T>
Iterator<T> NodeList<T>::begin() const {return Iterator<T>(header->next);}

template <typename T>
Iterator<T> NodeList<T>::end() const {return Iterator<T>(trailer);}

template<typename T>
void NodeList<T>::insert(const Iterator<T> &p, const T &e) {
    LNode<T>* nextNode = p.v;
    LNode<T>* previousNode = nextNode->prev;
    LNode<T>* newNode = new LNode<T>;
    newNode->data = e;
    newNode->next = nextNode; nextNode->prev = newNode;
    newNode->prev = previousNode; previousNode->next = newNode;
    numElements++;
}

template <typename T>
void NodeList<T>::insertFront(const T &e) {
    insert(begin(), e);
}

template <typename T>
void NodeList<T>::insertBack(const T &e) {
    insert(end(), e);
}

template <typename T>
void NodeList<T>::erase(const Iterator<T> &p) {
    LNode<T>* eraseNode = p.v;
    LNode<T>* nextNode = eraseNode->next;
    LNode<T>* prevNode = eraseNode->prev;
    prevNode->next = nextNode; nextNode->prev = prevNode;
    delete eraseNode;
    numElements--;
}

template <typename T>
void NodeList<T>::eraseFront() {
    erase(begin());
}
template <typename T>
void NodeList<T>::eraseBack() {
    erase(end());
}