// prefixAverages with quadratic and linear run times
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 -  Initial Version

#include <vector>

// O(n^2)  (quadratic) runtime w/ iteration
// Takes in an n-element array X of numbers
// Returns an n-element array A of numbers such that A[i] is the average of
// elements X[0] - X[i]

template <typename T>
std::vector<T> quadraticTimePrefixAverages(std::vector<T> inputArray){
    std::vector<T> averages;
    for(int i{0}; i<inputArray.size()-1; i++){
        T a = 0;
        for(int j{0}; j<=i; j++){
            a= a + inputArray[j];
            averages[i] += a/(i+1);
        }
    }
    return averages;
}


// O(n) (linear) runtime with modification to algorithm

template <typename T>
std::vector<T> linearTimePrefixAverages(std::vector<T> inputArray){
    std::vector<T> averages;
    T s = 0;
    for(int i {0}; i<inputArray.size(); i++){
        s = s +inputArray[i];
        averages[i] += s/(i+1);
    }
    return averages;
}