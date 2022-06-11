// Sorted Entry into Dynamic Array
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version

template <typename T>
void sortedEntry(const T& newElem, T array[], int numElements, int size){
    if (numElements == size){
        size +=10;
        T * newArray;
        newArray = new T[size];
        for(int i{0}; i<numElements; i++){
            newArray[i] = array[i];
        }
        delete [] array;
        array = newArray;
    }
    array[numElements] = newElem;
    numElements +=1;
}
