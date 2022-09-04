// Iterator class implementation for Node List
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#include "Iterator.h"

template <typename T>
Iterator<T>::Iterator(LNode<T> *u): v(u) {}

template <typename T>
Iterator<T>::~Iterator() {}

template <typename T>
T &Iterator<T>::operator*() {return v->data;}

template <typename T>
bool Iterator<T>::operator==(const Iterator<T> &p) const {return v ==p.v;}

template <typename T>
bool Iterator<T>::operator!=(const Iterator<T> &p) const {return v != p.v;}

template <typename T>
Iterator<T> &Iterator<T>::operator++() {
    v=v->next;
    return *this;
}

template <typename T>
Iterator<T> &Iterator<T>::operator--() {
    v=v->prev;
    return *this;
}