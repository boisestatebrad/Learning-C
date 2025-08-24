#include <stdio.h>


#define STEP 20
#define LOWER 0
#define UPPER 300
    
int main()
{
    // float fahr, cel;
    // int lower, upper, step;

    // lower = 0;
    // upper = 300;
    // step = 20;

    // fahr = lower;

    // printf("Celsius <-> Fahrenheit\n");

    // while (fahr <= upper){
    //     cel = (5.0/9.0) *(fahr-32.0);
    //     printf("%3.0f         %6.1f\n", fahr, cel);
    //     fahr = fahr + step;
    // }

    // return 0;

    
    float fahr;

    printf("Fahrenheit <-> Celsius\n");
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP )
    {
        printf("%3.0f         %6.1f\n", fahr, (5.0/9.0) *(fahr-32.0));
    }

    return 0;
}
