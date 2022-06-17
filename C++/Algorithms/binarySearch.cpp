// binarySearch function for vectors and arrays
//
// Author: Brian Horner
// Edit History:
// 6/17/2022 - Initial Version

#include <vector>

// Return index of target element in vector
// O(logn) runtime
template <typename T>
int binarySearchVector(std::vector<T> & vect, T target){
    int min = 0;
    int max = vect.size()-1;
    while (min<=max){
        int mid = (min + max)/2;
        if(target == vect[mid]){
            return mid;
        }else if (target < vect[mid]){
            max = mid-1;
        }else if (target > vect[mid]){
            min = mid +1;
        }
    }
    return -1;
}

// Return index of target element in array
// O(logn) runtime
template <typename T>
int binarySearchArray(T arr[], int size, T target){
    int min = 0;
    int max = size - 1;
    while (min<=max){
        int mid = (min + max)/2;
        if(target == arr[mid]){
            return mid;
        }else if (target < arr[mid]){
            max = mid-1;
        }else if (target > arr[mid]){
            min = mid +1;
        }
    }
    return -1;
}
