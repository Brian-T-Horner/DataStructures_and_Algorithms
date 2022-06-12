// Function to reverse a vector with a stack
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version

#include "../Data_Structures/ArrayStack/ArrayStack.h"
#include <vector>

template <typename T>
void reverseVector(std::vector<T>& V){
    ArrayStack<T> S(V.size()); //making a stack w/size of vector
    for(int i{0}; i< V.size(); i++){
        S.push(V[i]); //pushing elements onto stack
    }
    for(int i=0; i<V.size(); i++){
        V[i] = S.top(); //pop elements from stack in reverse order
        S.pop();
    }
}
