// Template Singly Linked List Specification
//
// Author: Brian Horner
// Edit History:
// 6/6/2022 - Initial Version
// 6/12/2022 - Added template for copy constructor, assignment operator and
// equality operator


#ifndef SinglyLinkedList_H
#define SinglyLinkedList_H
#include "SNode.h"

template <typename T>
class SinglyLinkedList {
public:
    SinglyLinkedList();
    SinglyLinkedList(SinglyLinkedList<T> const & oldList);
    SinglyLinkedList<T>& operator=(SinglyLinkedList<T> const & oldList);
    bool operator==(SinglyLinkedList<T> const & comparisonList);
    ~SinglyLinkedList();
    bool empty() const;
    const T& front() const;
    void addNode(const T& e);
    void removeNode();
private:
    SNode<T>* head;
};


#endif
