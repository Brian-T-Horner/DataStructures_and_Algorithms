// Dynamic 1D Array Implementation
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version

#include "DynamicArray.h"

// Definition of Dynamic Array

template<typename T>
DynamicArray<T>::DynamicArray(int size){
    array = new T[size]; // Allocate array to size of parameter
    // Can't initialize elements here as we do not know type yet
    // automatically initialized to default of type
    length = size;
    nextIndex = 0;
}

template <typename T>
DynamicArray<T>::~DynamicArray() {delete [] array;}

template <typename T>
T& DynamicArray<T>::operator[](int index) {
    T * newArray; // pointer to new array
    if(index>=length){ // is the element in the array?
        newArray = new T[index +10];
        for(int i{0}; i<nextIndex; i++){ // copy elements from old to new
            newArray[i] = array[i];
        }
        // can't initialize rest of array based off type yet
        // automatically initialized to default of type
        length = index +10; // set length to current size
        delete [] array;  // delete the previous array
        array = newArray; // reassign pointer to array
    }
    if(index > nextIndex){    // set nextIndex past index
        nextIndex = index+1;
        return *(array+index); // Return reference to element
    }
}

template <typename T>
void DynamicArray<T>::add(T newValue){
    T * newArray;
    if(nextIndex == length){ // If we are the max elements in array
        length = length+10; // Increase max elements
        newArray = new T[length];
        for(int i{0}; i<nextIndex; i++){ //Copy elements from old to new
            newArray[i] = array[i];
        }
        // can't initialize rest of array based off type yet
        // automatically initialized to default of type
        delete [] array;
        array = newArray; // Set array ptr to updated array
    }
    array[nextIndex+1] = newValue; // adding newValue to array
}

template <typename T>
int DynamicArray<T>::size(){return length;}