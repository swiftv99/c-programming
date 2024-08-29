#include <stdio.h>

void printNumbers() {
    int num = 1;
    label:
        printf("%d\n", num);
        num++;
        if (num <= 10) {
            goto label;
        }
}
int main() {
    printNumbers();
    return 0;
}