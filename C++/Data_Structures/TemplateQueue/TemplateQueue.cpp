// Template queue implementation
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version

#include "TemplateQueue.h"
#include <iostream>

template <typename T>
TemplateQueue<T>::TemplateQueue(int capacity): array(new
T[capacity]),capacity(capacity), numElements(0), frontIndex(0), rearIndex(0) {}

template <typename T>
TemplateQueue<T>::~TemplateQueue(){
    delete [] array;
}

template <typename T>
int TemplateQueue<T>::size() const {return (numElements);}

template <typename T>
bool TemplateQueue<T>::empty() const {return (numElements<1);}

template<typename T>
const T& TemplateQueue<T>::front() const {
    if(empty()){
        std::cout << "QueueEmpty exception thrown here." <<std::endl;
    }
    return array[frontIndex];
}

template <typename T>
void TemplateQueue<T>::dequeue() {
    if(empty()){
        std::cout << "QueueEmpty exception thrown here." <<std::endl;
    }
    frontIndex = (frontIndex+1) % numElements;
    numElements-=1;

}

template <typename T>
void TemplateQueue<T>::enqueue(const T &e) {
    if(numElements == capacity){
        std::cout << "QueueFull exception thrown here." <<std::endl;
    }
    array[rearIndex] = e;
    rearIndex = (rearIndex+1)&numElements;
    numElements+=1;
}