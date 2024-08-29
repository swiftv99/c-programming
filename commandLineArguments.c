#include <stdio.h>

int main(int argc, char *argv[]) {
    int numberOfArguments = argc;
    char *argument0 = argv[0];
    char *argument1 = argv[1];
    char *argument2 = argv[2];

    printf("Number of arguments: %d\n", numberOfArguments);
    printf("First argument: %s\n", argument0);
    printf("Second argument: %s\n", argument1);
    printf("Third argument: %s\n", argument2);
    return 0;
}