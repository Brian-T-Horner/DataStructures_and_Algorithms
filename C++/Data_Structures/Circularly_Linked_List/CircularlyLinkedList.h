// Template Circularly Linked List Specification
//
// Author: Brian Horner
// Edit History:
// 6/6/2022 - Initial Version

#ifndef CircularlyLinkedList_H
#define CircularlyLinkedList_H

#include "CNode.h"

template<typename T>
class CircularlyLinkedList {
public:
    CircularlyLinkedList();
    ~CircularlyLinkedList();
    bool empty() const;
    const T& front() const;
    const T& back() const;
    void advance();
    void add(const T& e);
    void removeNode();
private:
    CNode<T>* cursor;
};


#endif
