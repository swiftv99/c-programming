#include <stdio.h>
#include <stdbool.h>


int main(int argc, char **argv) {
    int intVar = 123;
    float floatVar = 4324.43;
    double doubleVar = 4324.42e+12;
    char charVar = 'H';
    bool boolVar = true;

    printf("intVar: %i\n", intVar);
    printf("intVar: %d\n", intVar);
    
    printf("floatVar: %f\n", floatVar);
    
    printf("doubleVar: %lf\n", doubleVar);
    printf("doubleVar: %e\n", doubleVar);
    printf("doubleVar: %g\n", doubleVar);

    printf("charVar: %c\n", charVar);

    printf("boolVar: %i\n", boolVar);
    printf("boolVar: %d\n", boolVar);

    printf("All variables: %d, %f, %lf, %c, %i\n", intVar, floatVar, doubleVar, charVar, boolVar);
    return 0;
}