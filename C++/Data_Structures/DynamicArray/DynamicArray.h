// Dynamic 1D Array Specification
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version
// 6/12/2022 - Added template for copy constructor, assignment operator and
// equality operator

#ifndef DynamicArray_H
#define DynamicArray_H

template<typename T>
class DynamicArray {
public:
    explicit DynamicArray(int size = 100);
    DynamicArray(DynamicArray<T> const & oldArray);
    DynamicArray<T>& operator=(DynamicArray<T> const & otherArray);
    bool operator==(DynamicArray<T> const & comparisonArray);
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
