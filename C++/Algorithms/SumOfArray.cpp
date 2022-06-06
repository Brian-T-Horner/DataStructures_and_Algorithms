// Sum of 1d Array with linear and binary recursion
//
// Author: Brian Horner
// Edit History:
// 6/6/2022 -  Initial Versions of linear and binary recursion


// Sum of Array with Linear Recursion
template <typename B>
B linearSum(B a[], int numElements){
    if(numElements < 0){
        return 0;
    }else{
        if(numElements == 1){
            return a[0];
        }else{
            return linearSum(a, numElements-1) + a[numElements-1];
        }
    }
}


// Sum of Array with Binary Recursion
template <typename T>
T binarySum(T a[], int start, int numElements){
    if(numElements < 0){
        return 0;
    }else{
        if(numElements == 1){
            return a[start];
        }
        return binarySum(a, start, (numElements/2)) + binarySum(a, start +
        (numElements/2), (numElements/2));
    }
}

