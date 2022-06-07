// Template Circular Linked List Node Specification
//
// Author: Brian Horner
// Edit History:
// 6/6/2022 - Initial Version


#ifndef CNODE_H
#define CNODE_H

template <typename T>
class CNode {
public:
    CNode();
    ~Cnode();
private:
    T data;
    CNode<T>* next;

    friend class CircularlyLinkedList<T>;
    //provide Circularly Linked List access
};


#endif
