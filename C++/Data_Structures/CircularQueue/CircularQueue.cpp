// Queue with circular linked list implementation
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version

#include "CircularQueue.h"
#include <iostream>

template <typename T>
CircularQueue<T>::CircularQueue(): list(), numElements(0){}

template <typename T>
CircularQueue<T>::~CircularQueue() {}

template <typename T>
int CircularQueue<T>::size() const {return numElements;}

template <typename T>
bool CircularQueue<T>::empty() const {return numElements == 0;}

template <typename T>
const T& CircularQueue<T>::front() const {
    if(empty()){
        std::cout << "QueueEmpty exception thrown here."<<std::endl;
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
        std::cout << "QueueEmpty exception thrown here." <<std::endl;
    }
    list.removeNode();
    numElements--;
}