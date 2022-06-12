// Queue with circular linked list specification
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version
// 6/12/2022 - Added template for copy constructor, assignment operator and
// equality operator

#ifndef CircularQueue_H
#define CircularQueue_H

#include "../Circularly_Linked_List/CircularlyLinkedList.h"

template <typename T>
class CircularQueue {
public:
    CircularQueue();
    CircularQueue(CircularQueue<T>& oldQueue);
    CircularQueue<T>& operator=(CircularQueue<T> const & otherQueue);
    bool operator==(CircularQueue<T> const & comparisonQueue);
    ~CircularQueue();
    int size() const;
    bool empty() const;
    const T& front() const noexcept(false);
    void enqueue(const T& e);
    void dequeue() noexcept(false);
private:
    CircularlyLinkedList<T> list;
    int numElements;
};


#endif
