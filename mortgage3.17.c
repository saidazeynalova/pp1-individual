#include <stdio.h>

int main() {
    int account;
    float mortgage;
    int term;
    float rate;

    printf("Enter account number: ");
    scanf("%d", &account);

    while (account != -1) {
        printf("Enter mortgage amount (in dollars): ");
        scanf("%f", &mortgage);
        
        printf("Enter mortgage term (in years): ");
        scanf("%d", &term);

        printf("Enter interest rate (as a decimal): ");
        scanf("%f", &rate);

        float interest = mortgage * rate * term;
        float total = mortgage + interest;
        float monthly = total / (term * 12);

        printf("The monthly payable interest is: $ %.0f\n", monthly);

        printf("Enter account number (-1 to end): ");
        scanf("%d", &account);
     }
     return 0;
}