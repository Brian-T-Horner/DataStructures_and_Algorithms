// Extendable Array (Vector) Specification
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version
// 6/12/2022 - Added destructor, copy constructor, assignment operator and
// comparison operator

#ifndef ArrayVector_H
#define ArrayVector_H
#include "../../Exceptions/IndexOutOfBounds/IndexOutOfBounds.h"

template <typename T>
class ArrayVector {
public:
    ArrayVector();
    ArrayVector(ArrayVector<T>& oldVector);
    ArrayVector<T>& operator=(ArrayVector<T> const & otherVector);
    bool operator==(ArrayVector<T> const & comparisonVector);
    ~ArrayVector();
    int size() const;
    bool empty() const;
    T& operator[](int i) noexcept(false);
    T& at(int i) noexcept(false);
    void erase(int i);
    void insert(int i, const T& e);
    void reserve(int N); // reserve at least N spots in array
private:
    int capacity;
    int numElements;
    T* array;
};


#endif
