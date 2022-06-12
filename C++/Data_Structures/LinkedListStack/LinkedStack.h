// Linked List based Stack Specification
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version
// 6/12/2022 - Added template for copy constructor, assignment operator and
// equality operator

#ifndef LinkedStack_H
#define LinkedStack_H

#include "../Singly_Linked_List/SinglyLinkedList.h"

template <typename T>
class LinkedStack {
    LinkedStack();
    LinkedStack(LinkedStack<T> const & oldStack);
    LinkedStack<T>& operator=(LinkedStack<T> const & oldStack);
    bool operator==(LinkedStack<T> const & comparisonStack);
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
