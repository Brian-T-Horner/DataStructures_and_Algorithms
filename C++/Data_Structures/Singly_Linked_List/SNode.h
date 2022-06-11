// Template Singly Linked List Node Specification
//
// Author: Brian Horner
// Edit History:
// 6/6/2022 - Initial Version

#ifndef SNode_H
#define SNode_H

//template<typename T> class SinglyLinkedList;

template <typename T>
class SNode {
public:
    SNode();
    ~SNode();
private:
    SNode<T>* next;
    T data;
    template <typename U> friend class SinglyLinkedList;
    // provide SinglyLinkedList access
};


#endif
