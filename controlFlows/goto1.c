#include <stdio.h>

void checkEvenOrNot(int num) {
    if (num % 2 == 0)
        goto even;
    else 
        goto odd;

    even:
        printf("%d is even number\n", num);
        return;
    odd:
        printf("%d is odd number\n", num);
        return;
}

int main() {
    int num;
    printf("Enter any number:\n");
    scanf("%d", &num);
    checkEvenOrNot(num);
    return 0;
}