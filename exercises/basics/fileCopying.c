#include <stdio.h>

// int main(){

//     int c;

//     c = getchar();
//     while(c != EOF){ // EOF means end of files indicator 
//         putchar(c);
//         c = getchar();
//     }
//     return 0;
// }

// int main(){

//     int c; 
//     int i = 0;
//     while((c = getchar()) != EOF){ //assigns c to get a char form keyboard, then test if it does not equal EOF
       
//         printf("result: %d\n", c != EOF );
//         i++;
//     }
//     printf("count: %d\n" , i - 1);
//     printf("final: %d\n", c != EOF );
//     return 0;
// }

int main(){
    double count;
    for (count = 0; getchar() != EOF; count++)
        ;
    printf("%.0f\n", count);

    return 0;
}