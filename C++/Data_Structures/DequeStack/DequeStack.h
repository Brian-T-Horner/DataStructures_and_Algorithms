// Stack with deque adapter (or wrapper) implementation
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#ifndef DequeStack_H
#define DequeStack_H

#include "../LinkedDeque/LinkedDeque.h"

template <typename T>
class DequeStack {
public:
    DequeStack();
    DequeStack(DequeStack<T> const& oldStack);
    DequeStack<T>& operator=(DequeStack<T> const& otherStack);
    bool operator==(DequeStack<T> const & comparisonStack);
    ~DequeStack();
    int size() const;
    bool empty() const;
    const T& top() const; // throw(stackEmpty);
    void push(const T& e);
    void pop(); // throw(StackEmpty);
private:
    LinkedDeque<T> deque;
};


#endif
