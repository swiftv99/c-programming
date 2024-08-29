#include <stdio.h>

int main()
{
    short int i = 20;
    char c = 97;
    printf("%lu, %lu, %lu\n", sizeof(i), sizeof(c), sizeof(c + i));
    return 0;
}