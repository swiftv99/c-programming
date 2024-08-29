#include <stdio.h>

int main() {
    /*
    Type Conversion or Casting
    */
    // Implicit
    float myFloat = 9;
    printf("%f\n", myFloat);

    int myInt = 9.99;
    printf("%i\n", myInt); 
    
    float sum = 5 / 2;
    printf("%f\n", sum);

    // Explicit
    float sum2 = (float) 5 / 2;
    printf("%f\n", sum2);

    int num1 = 5, num2 = 2;
    float division = (float) num1 / num2;
    printf("%.1f\n", division);

    return 0;
}