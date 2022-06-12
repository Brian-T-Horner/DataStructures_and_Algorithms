// Template queue specification
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version

#ifndef TemplateQueue_H
#define TemplateQueue_H

template <typename T>
class TemplateQueue {
public:
    explicit TemplateQueue(int capacity=100);
    ~TemplateQueue();
    int size() const;
    bool empty() const;
    const T& front() const; //throw(QueueEmpty);
    void enqueue (const T& e);
    void dequeue(); // throw(QueueEmpty);
private:
    T* array;
    int capacity;
    int numElements;
    int frontIndex;
    int rearIndex;
};


#endif
