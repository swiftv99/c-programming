#include <stdio.h>
#include <stdbool.h>

int main() {
    /*
    Memory size: sizeof Operator
    */
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;
    bool myBool;
    long int myLongInt;
    long long int myLongLongInt;
    signed int mySignedInt;
    unsigned int myUnsignedInt;

    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));
    printf("%lu\n", sizeof(myBool));
    printf("%lu\n", sizeof(myLongInt));
    printf("%lu\n", sizeof(myLongLongInt));
    printf("%lu\n", sizeof(mySignedInt));
    printf("%lu\n", sizeof(myUnsignedInt));
    
    return 0;
}