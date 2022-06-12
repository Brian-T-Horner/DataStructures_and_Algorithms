// Extendable Array (Vector) Implementation
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#include "ArrayVector.h"

template <typename T>
ArrayVector<T>::ArrayVector(): capacity(0), numElements(0), array(nullptr) {}

template <typename T>
ArrayVector<T>::~ArrayVector() {delete [] array;}

template <typename T>
int ArrayVector<T>::size() const {return numElements;}

template <typename T>
bool ArrayVector<T>::empty() const {return size() == 0;}

template <typename T>
T& ArrayVector<T>::operator[](int i) {
    if(i<0 || i>= numElements){
        throw IndexOutOfBounds("illegal index in function at ()");
    }
    return array[i];
}

template <typename T>
T& ArrayVector<T>::at(int i) {
    if(i<0 || i>=numElements){
        throw IndexOutOfBounds("illegal index in function at()");
    }
    return array[i];
}

template <typename T>
void ArrayVector<T>::erase(int i) {
    // iterate through elements from index i+1 to numElements
    for(int j=i+1; j<numElements; j++){
        array[j-1] = array[j]; // shift elements down
    }
    numElements--;
}

template <typename T>
void ArrayVector<T>::insert(int i, const T &e) {
    if(numElements>= capacity){ // if array is already full
        reserve(std::max(1, 2 *capacity)); //double array size
    }
    for(int j=numElements-1; j>=i; j--){ // shift element up to make room
        array[j+1] = array[j];
    }
    array[i] = e; // assign e to index i in array
    numElements++; // increase numElements
}

template<typename T>
void ArrayVector<T>::reserve(int N) {
    if(capacity >=N){ // check if array is already big enough
        return;
    }
    T* newArray = new T[N]; // allocate bigger array
    for (int j{0}; j<numElements; j++){ // copy elements to new array
        newArray[j] = array[j];
    }
    if(array != NULL){ // discard old array
        delete [] array;
    }
    array = newArray; // assign array to ptr directed toward newArray
    capacity = N; // update capacity
}