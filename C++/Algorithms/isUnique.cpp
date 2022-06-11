// isUnique functions with recursive, iterative and sort variants
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version

#include <vector>


// O(2^n) with recursive calls run amok
template <typename T>
bool isUniqueRecursive(const std::vector<T> & array, int start, int end){
    if(start>=end){
        return true;
    }
    if(!isUnique(array, start, end-1)){
        return false;
    }
    if(!isUnique(array, start+1, end)){
        return false;
    }
    return (array[start != array[end]]);
}

// O(n^2) runtime with two nested loops
template <typename T>
bool isUniqueIterative(const std::vector<T> array, int start, int end){
    if(start>=end){
        return true;
    }
    for(int i=start; i<end; i++){
        for(int j=i+1; j<=end; j++){
            if(array[i ==array[j]]){
                return false;
            }
        }
    }
    return true;
}

// O(nlogn) utilizing vectors and sort function
template <typename T>
bool isUniqueSort(const std::vector<T> array, int start, int end){
    if(start>= end){
        return true;
    }
    std::vector<T> buf(array);
    sort(buf.begin(),+start, buf.begin()+end);
    for(int i=start; i<end; i++){
        if(buf[i]==buf[i+1]){
            return false;
        }
    }
    return true;
}