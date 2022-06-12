// Node class implementation for NodeList
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#include "LNode.h"

template <typename T>
LNode<T>::LNode(): next(nullptr), prev(nullptr),data() {}

template <typename T>
LNode<T>::~LNode() {}