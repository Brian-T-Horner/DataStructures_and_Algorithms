// Dynamic 1D Array Specification
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version

#ifndef DynamicArray_H
#define DynamicArray_H

template<typename T>
class DynamicArray {
public:
    explicit DynamicArray(int size = 100);
    ~DynamicArray();
    T& operator[](int index);
    void add(T newValue);
    int size();
private:
    T *array;
    int length;
    int nextIndex;
};
//TODO

#endif
