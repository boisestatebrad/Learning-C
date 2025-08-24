#include <stdio.h>

int power(int base, int exponent);
int powerV2(int base, int exponent);

/**
 * test power function
 */
int main(){
    int i; 
    int testBase = 4;
    for(i = 0; i < 6; ++i){
        printf("%d^%d = %d\n", testBase, i, powerV2(testBase, i));  
    }
    return 0;
}

/**
 * Function defintion
 * power: raise base to n-th power; n >= 0
 */
int power(int base, int n){
    int i, p;
    p = 1;
    

    for(i = 0; i < n; ++i){
        p = p * base;
    }
    return p;
}

/**
 * Function defintion
 * power: raise base to n-th power; n >= 0 v2
 */
int powerV2(int base, int n){
    int p;

    for(p = 1; n > 0; -- n){ //2 ->
        p = p * base; //2 
    }
    return p; //2^2 = 4
}
