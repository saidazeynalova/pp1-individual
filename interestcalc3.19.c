#include <stdio.h>

int main () {
    float principal, rate;
    int days;

    printf("Enter loan principal (-1 to end): ");
    scanf("%f", &principal);

    while ( principal != -1) {
        printf("Enter interest rate: ");
        scanf("%f", &rate);

        printf("Enter term of the loan in days: ");
        scanf("%d", &days);

        float interest = principal * rate * days / 365;

        printf("The interest charge is: $%.2f\n", interest);

        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &principal);
    }
    return 0;
}