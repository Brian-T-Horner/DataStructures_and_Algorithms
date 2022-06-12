// Template queue implementation
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version

#include "TemplateQueue.h"
#include "../../Exceptions/QueueEmpty/QueueEmpty.h"
#include "../../Exceptions/QueueFull/QueueFull.h"

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
        throw QueueEmpty("front of empty queue");
    }
    return array[frontIndex];
}

template <typename T>
void TemplateQueue<T>::dequeue() {
    if(empty()){
        throw QueueEmpty("dequeue of empty queue");
    }
    frontIndex = (frontIndex+1) % numElements;
    numElements-=1;

}

template <typename T>
void TemplateQueue<T>::enqueue(const T &e) {
    if(numElements == capacity){
        throw QueueFull("enqueue of full queue");
    }
    array[rearIndex] = e;
    rearIndex = (rearIndex+1)&numElements;
    numElements+=1;
}