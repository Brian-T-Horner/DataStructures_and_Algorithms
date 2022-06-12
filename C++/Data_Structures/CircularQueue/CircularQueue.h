// Queue with circular linked list specification
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version

#ifndef CircularQueue_H
#define CircularQueue_H

#include "../Circularly_Linked_List/CircularlyLinkedList.h"

template <typename T>
class CircularQueue {
public:
    CircularQueue();
    ~CircularQueue();
    int size() const;
    bool empty() const;
    const T& front() const; //throw(QueueEmpty);
    void enqueue(const T& e);
    void dequeue(); //throw(QueueEmpty);
private:
    CircularlyLinkedList<T> list;
    int numElements;
};


#endif
