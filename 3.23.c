#include <stdio.h>

int main () {
    int counter = 1;
    int largest = 0;
    int number;

    while (counter <= 10) {
        printf("Enter number: ");
        scanf("%d", &number);

        if (number > largest){
            largest = number;
        }

        counter++;
    }
    printf("The largest number is: %d\n", largest);
    return 0;
}