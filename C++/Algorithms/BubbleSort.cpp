// Template Array Bubble Sort
//
// Author: Brian Horner
// Edit History:
// 6/6/2022 - Initial Version

template <typename T>
void bubbleSort(T array[], int arraySize){
    for(int i{0}; i<arraySize; i++){
        for(int j{i+1}; j<arraySize-i-1; j++){
            if (array[j] > array[j+1]){
                T temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}
