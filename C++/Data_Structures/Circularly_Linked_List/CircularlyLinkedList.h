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
    CircularlyLinkedList(CircularlyLinkedList<T>& oldCList);
    CircularlyLinkedList<T>& operator=(CircularlyLinkedList<T> const &otherCList);
    bool operator==(CircularlyLinkedList<T> const & compareCList);
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
