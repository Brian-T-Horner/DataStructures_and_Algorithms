// Template Singly Linked List Specification
//
// Author: Brian Horner
// Edit History:
// 6/6/2022 - Initial Version


#ifndef SinglyLinkedList_H
#define DSinglyLinkedList_H

template <typename T>
class SinglyLinkedList {
public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    bool empty() const;
    const T& head() const;
    void addNode(const T& e);
    void removeNode();
private:
    SNode* head;
};


#endif
