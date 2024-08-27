#include <stdio.h>

int main() {
    double width, height;
    double perimeter = 0.0, area = 0.0;

    printf("Enter the value of width: ");
    scanf("%lf", &width);
    printf("Enter the value of height: ");
    scanf("%lf", &height);

    perimeter = 2 * (width + height);
    area = width * height;

    printf("width: %e\n", width);
    printf("height %g\n", height);
    printf("perimeter %lf\n", perimeter);
    printf("area %lf\n", area);
    
    return 0;
}