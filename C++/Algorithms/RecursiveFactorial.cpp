// Recursive Factorial Function
//
// Author: Brian Horner
// Edit History:
// 6/6/2022 - Initial Version

int recursiveFactorial(int n){
    if(n==0){
        return 1;
    }else{
        return n* recursiveFactorial(n-1);
    }
}