// recursive power function
//
// Author: Brian Horner
// Edit History:
// 6/11/2022 - Initial Version


// O(logn) runtime w/ linear recursion
double recursivePower(double x, int power){
    if(power == 0){
        return 1;
    }
    if(power %2==1){
        double y = recursivePower(x, (power-1/2));
        return (x * y * y);
    }else{
        double y = recursivePower(x, (power/2));
        return (y*y);
    }
}

