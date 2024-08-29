#include <stdio.h>

int main() {
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Friday;

    switch (today) {
        case Sunday:
            printf("Today is Sunday\n");
            break;
        case Monday:
            printf("Today is Monday\n");
            break;
        case Friday:
            printf("Today is Friday\n");
            break;
        default:
            printf("Any other day\n");
    }
    return 0;
}