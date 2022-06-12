// Linked List based Stack Specification
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version

#ifndef LinkedStack_H
#define LinkedStack_H

#include "../Singly_Linked_List/SinglyLinkedList.h"

template <typename T>
class LinkedStack {
    LinkedStack();
    ~LinkedStack();
    int size() const;
    bool empty() const;
    T& peak();
    const T& top() const noexcept(false);
    void push(const T& e);
    void pop() noexcept(false);
private:
    SinglyLinkedList<T> list;
    int numElements;
};


#endif
