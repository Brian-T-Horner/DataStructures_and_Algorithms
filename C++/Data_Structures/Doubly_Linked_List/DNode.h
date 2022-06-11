// Template Doubly Linked List Node Specification
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version

#ifndef DNode_H
#define DNode_H

template <typename T>
class DNode {
public:
    DNode();
    ~DNode();
private:
    T data;
    DNode<T>* next;
    DNode<T>* prev;
    template <typename U> friend class DoublyLinkedList;
};


#endif
