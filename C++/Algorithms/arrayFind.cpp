// arrayFind function
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version

// O(n) runtime
template <typename T>
int  arrayFind(T element, T array[], int size){
    int i=0;
    while (i<size){
        if (element == array[i]){
            return i;
        }else{
            i+=1;
        }
    }
    return -1;
}
