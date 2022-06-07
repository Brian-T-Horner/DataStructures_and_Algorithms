// Template Singly Linked List Node Implementation
//
// Author: Brian Horner
// Edit History:
// 6/6/2022 - Initial Version

#include "SNode.h"
template <typename T>
SNode<T>::SNode(T newData) {
    next = nullptr;
    data = newData;
}

template <typename T>
SNode<T>::~SNode<T>() {}