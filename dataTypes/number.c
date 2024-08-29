#include <stdio.h>

int main() {
    /*
    Numbers: Int, Float and Double Data Types
    */
    // int
    int myInt = 1234;
    printf("%i\n", myInt);

    // float
    float myFloat = 123.4312;
    float myFloat2 = 124.23e+4;
    printf("%f\n", myFloat);
    printf("%.2f\n", myFloat);
    printf("%f\n", myFloat2);

    // double 
    double myDouble = 1766824.432468782;
    double myDouble2 = 6557.634E-4;
    printf("%lf\n", myDouble);
    printf("%.4lf\n", myDouble);
    printf("%lf\n", myDouble2);

    // constants
    const int minutesPerHour = 60;
    const float PI = 3.14;
    minutesPerHour = 100; // error

    return 0;
}