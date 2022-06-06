// Reverse Array with linear recursion and iteration
//
// Author: Brian Horner
// Edit History:
// 6/6/2022 - Initial Version


// Reverse Array with Linear Recursion
template <typename T>
void reverseArray(T a[], int startIndex, int endIndex){
    if(startIndex < endIndex){
        int temp = a[endIndex];
        a[endIndex] = a[startIndex];
        a[startIndex] = temp;
        reverseArray(a, startIndex +1, endIndex -1);
    }
}

// Reversing Array with Linear Recursion is an example of Tail Recursion.
// Tail Recursion is when an algorithm uses linear recursion and its recursive
// call is its very last operation. These types of recursions are very easy
// to convert to iterative algorithms as show below:

// Reverse Array with Iteration
template <typename B>
void iterativeReverseArray(B a[], int startIndex, int endIndex){
    while(startIndex<endIndex){
        int temp = a[endIndex];
        a[endIndex] = a[startIndex];
        a[startIndex] = temp;
        startIndex ++;
        endIndex --;
    }
}
