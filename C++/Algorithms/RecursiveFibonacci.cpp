// Recursive Fibonacci with linear and binary
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version
// 6/22/2022 - Added Binary Recursive Fibonacci Function



// Linear Recursive Fibonacci - Returns the kth and k-1 Fibonacci numbers
//double [] linearRecursiveFibonacci(double k){
//    double returnArray[2];
//    if(k<=1){
//        return k;
//    }else{
//
//    }
//}


// Binary Recursive Fibonacci - Returns the kth Fibonacci number
double binaryRecursiveFibonacci(double k){
    if(k<=1){
        return k;
    }else{
        return binaryRecursiveFibonacci(k-1) + binaryRecursiveFibonacci(k-2);
    }
}