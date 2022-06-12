// Template Array Stack Specification
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version

#ifndef STACK_H
#define STACK_H

template <typename T>
class ArrayStack {
public:
    ArrayStack(int capacity = 100);
    ~ArrayStack();
    int size() const;
    bool empty() const;
    const T& top() const noexcept(false);
    void push(const T& e) noexcept(false);
    void pop() noexcept(false);
private:
    T* array;
    int capacity; // total number of elements allowed in stack
    int t; // index of elements, i.e. 1 element t=0
};


#endif
