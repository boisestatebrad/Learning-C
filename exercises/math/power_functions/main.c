#include <stdio.h>
#include "header.h"

int main(){
    int i; 
    int testBase = 4;
    for(i = 0; i < 6; ++i){
        printf("%d^%d = %d\n", testBase, i, powerV2(testBase, i));  
    }
    return 0;
}
