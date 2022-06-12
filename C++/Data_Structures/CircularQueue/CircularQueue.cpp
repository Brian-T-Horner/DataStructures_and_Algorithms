// Queue with circular linked list implementation
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version
// 6/12/2022 - Added template for copy constructor, assignment operator and
// equality operator

#include "CircularQueue.h"
#include "../../Exceptions/QueueEmpty/QueueEmpty.h"

template <typename T>
CircularQueue<T>::CircularQueue(): list(), numElements(0){}

template <typename T>
CircularQueue<T>::CircularQueue(CircularQueue<T>& oldQueue){
    //TODO::
}

template <typename T>
CircularQueue<T>& CircularQueue<T>::operator=(CircularQueue<T> const &otherQueue){
    //TODO::
}

template <typename T>
bool CircularQueue<T>::operator==(CircularQueue<T> const & comparisonQueue){
    //TODO::
}

template <typename T>
CircularQueue<T>::~CircularQueue() {
    while(!empty()){
        dequeue();
    }
}

template <typename T>
int CircularQueue<T>::size() const {return numElements;}

template <typename T>
bool CircularQueue<T>::empty() const {return numElements == 0;}

template <typename T>
const T& CircularQueue<T>::front() const {
    if(empty()){
        throw QueueEmpty("front of empty queue");
    }
    return list.front();
}

template <typename T>
void CircularQueue<T>::enqueue(const T &e) {
    list.add(e); // insert after cursor
    list.advance(); // move cursor forward
    numElements++;
}

template <typename T>
void CircularQueue<T>::dequeue() {
    if(empty()){
        throw QueueEmpty("dequeue of empty queue");
    }
    list.removeNode();
    numElements--;
}