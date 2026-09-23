#include <stdio.h>

int main() {
    float sales;

    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &sales);

    while (sales != -1) {
        float salary = 200 + sales * 0.09;

        printf("Salary is: $%.2f\n", salary);

        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
    }
    return 0;
}