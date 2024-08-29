#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(char));
    printf("%zu\n", sizeof(long));
    printf("%zu\n", sizeof(long long));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(long double));
    
    return 0;
}