// Vector Summation functions using iteration, iterator and const-iterator
//
// Author: Brian Horner
// Edit History:
// 6/12/2022 - Initial Version

#include <vector>
using std::vector;


// Iterative summation of elements in vector
template <typename T>
T vectorSum1(const vector<T>& V){
    T sum = 0;
    for(int i{0}; i<V.size(); i++){
        sum += V[i];
    }
    return sum;
}

// Iterator summation of elements in vector
template <typename T>
T vectorSum2(vector<T> V){
    typedef typename vector<T>::iterator Iterator;
    int sum = 0;
    for (Iterator p = V.begin(); p!= V.end(); ++p){
        sum+= *p;
    }
    return sum;

}

// Const Iterator summation of elements in vector
template <typename T>
T vectorSum3(const vector<T> & V){
    typedef typename vector<T>::const_iterator ConstIterator;
    int sum = 0;
    for(ConstIterator p = V.begin(); p!= V.end(); ++p){
        sum += *p;
    }
    return sum;
}
