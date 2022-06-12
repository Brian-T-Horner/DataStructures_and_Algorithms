// Extendable Array (Vector) Specification
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#ifndef ArrayVector_H
#define ArrayVector_H

template <typename T>
class ArrayVector {
public:
    ArrayVector();
    ~ArrayVector();
    int size() const;
    bool empty() const;
    T& operator[](int i); // throw(IndexOutOfBounds);
    T& at(int i); // throw(IndexOutOfBounds);
    void erase(int i);
    void insert(int i, const T& e);
    void reserve(int N); // reserve at least N spots in array
private:
    int capacity;
    int numElements;
    T* array;
};


#endif
