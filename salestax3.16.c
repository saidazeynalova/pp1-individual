#include <stdio.h>

int main() {
    float a;
    char m[20];

    printf("Enter total ammount collected: ");
    scanf("%f", &a);

    while (a != -1) {
        printf("Enter name of month: ");
        scanf("%s", m);

        float sales = a / 1.09;
        float countyTax = sales * 0.05;
        float stateTax = sales * 0.04;
        float totalTax = countyTax + stateTax;

        printf("Total collections:$ %.2f\n", a);
        printf("Sales: $ %.2f\n", sales);
        printf("County Sales Tax: $ %.2f\n", countyTax);
        printf("State Sales Tax: $ %.2f\n", stateTax);
        printf("Total Sales Tax Collected: $ %.2f\n", totalTax);
        printf("Enter total amount collected (-1 to quit): ");
        scanf("%f", &a);
}
    return 0;
} 
