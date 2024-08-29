#include <stdio.h>
#include <stdbool.h>

#define PAYRATE 12.00
#define TAXRATE_BELOW_300 0.15
#define TAXRATE_BELOW_450 0.20
#define TAXRATE_ABOVE_450 0.25
#define OVERTIME 40
#define THRESHOLD_300 300
#define THRESHOLD_450 450

int main() {
    int numberOfHoursPerWeek;
    double grossPay=0.0, taxes=0.0, netPay=0.0;

    printf("Enter the number of hours that you worked in a week: \n");
    scanf("%d", &numberOfHoursPerWeek);

    // Gross Pay
    if (numberOfHoursPerWeek > OVERTIME) {
        grossPay += (1.5 * PAYRATE) * (numberOfHoursPerWeek - OVERTIME);
        grossPay +=  PAYRATE * OVERTIME;
    } else {
        grossPay += PAYRATE * numberOfHoursPerWeek;
    }

    // Taxes
    if (grossPay < THRESHOLD_300) {
        taxes = TAXRATE_BELOW_300 * grossPay;
    } else if (grossPay >= THRESHOLD_300 && grossPay < THRESHOLD_450) {
        taxes = TAXRATE_BELOW_300 * THRESHOLD_300 + TAXRATE_BELOW_450 * (grossPay - THRESHOLD_300);
    } else {
        taxes = TAXRATE_BELOW_300 * THRESHOLD_300 + TAXRATE_BELOW_450 * (THRESHOLD_450 - THRESHOLD_300) + TAXRATE_ABOVE_450 * (grossPay - THRESHOLD_450);
    }

    // Net pay
    netPay = grossPay - taxes;

    printf("Gross salary: %.2f\n", grossPay);
    printf("Taxes: %.2f\n", taxes);
    printf("Net salary: %.2f\n", netPay);

    return 0;
}