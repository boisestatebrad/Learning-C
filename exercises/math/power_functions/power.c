/**
 * Function defintion
 * power: raise base to n-th power; n >= 0 v1
 */
int powerV1(int base, int n){
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
