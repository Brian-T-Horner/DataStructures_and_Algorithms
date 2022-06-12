// Template Doubly Linked List Specification (with header & trailer nodes)
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version
// 6/12/2022 - Added template for copy constructor, assignment operator and
// equality operator

#ifndef DoublyLinkedList_H
#define DoublyLinkedList_H

#include "DNode.h"

template <typename T>
class DoublyLinkedList {
public:
    DoublyLinkedList();
    DoublyLinkedList(DoublyLinkedList<T> const & oldDLList);
    DoublyLinkedList<T> & operator=(DoublyLinkedList<T> const & otherDLList);
    bool operator==(DoublyLinkedList<T> const & comparisonDLList);
    ~DoublyLinkedList();
    bool empty() const;
    const T& front() const;
    const T& back() const;
    void addFront(const T& e);
    void addBack(const T& e);
    void removeFront();
    void removeBack();
private: // sentinel nodes for easy access to front and back
    DNode<T>* header;
    DNode<T>* trailer;
protected: // local class utilities
    void add (DNode<T>*, const T& e);
    void remove(DNode<T>* v);

};


#endif
