// Two versions of Insertion Sort into an Array
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version


// Insertion Sort Algorithm - Does not take in input though??
template <typename T>
void insertionSortTextbook(T* A, int size){
    for (int i{1}; i<size; i++){ //Start at index 1
        T current = A[i];
        int j = i-1; // Comparison to index 0
        while((j>=0) && (A[j]>current)){
            A[j+1] = A[j];
            j-=1;
        }
        A[j+1] = current;
    }
}

// Brute force insertion sort that takes an array, size & new input
// Sorts lowest to highest
// O(n^2)?
template <typename T>
void insertionSort(T* array, int size, T newElement){
    for(int i{0}; i<size; i++){
        if(array[i]< newElement){
            for(int j{size}; j>=i; j--){
                array[j+1] = j;
            }
            array[i] = newElement;
        }
    }
}
