// Doubly Linked List Deque Specification
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version
// 6/12/2022 - Added template for copy constructor, assignment operator and
// equality operator

#ifndef LinkedDeque_H
#define LinkedDeque_H

#include "../Doubly_Linked_List/DoublyLinkedList.h"

template <typename T>
class LinkedDeque {
public:
    LinkedDeque();
    LinkedDeque(LinkedDeque<T> const & oldDeque);
    LinkedDeque<T>& operator=(LinkedDeque<T> const & otherDeque);
    bool operator==(LinkedDeque<T> const & comparisonDeque);
    ~LinkedDeque();
    int size() const;
    bool empty() const;
    const T& front() const noexcept(false);
    const T& back() const noexcept(false);
    void insertFront(const T& e);
    void insertBack(const T& e);
    void removeFront() noexcept(false);
    void removeBack() noexcept(false);
private:
    DoublyLinkedList<T> list;
    int numElements;

};


#endif
