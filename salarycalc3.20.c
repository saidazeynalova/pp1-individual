#include <stdio.h>

int main () {
    float hours, rate, salary;

    printf("Enter # of hours worked (-1 to end): ");
    scanf("%f", &hours);

    while (hours != -1) {
        printf("Enter hourly rate of the worker: ");
        scanf("%f", &rate);

        if (hours <= 40) {
            salary = rate * hours;
        }
        else {
            salary = 40 * rate + (hours -40) * rate * 1.5;
        }
        printf("Salary is: $%.2f\n", salary);

        printf("Enter # of hours worked (-1 to end): ");
        scanf("%f", &hours);
    }
    return 0;
}