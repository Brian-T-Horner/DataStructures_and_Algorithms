// Template Doubly Linked List Node Implementation
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version

#include "DNode.h"


template <typename T>
DNode<T>::DNode(){next= nullptr; prev= nullptr;}

template <typename T>
DNode<T>::~DNode<T>() {}