#include <stdio.h>

int main () {
    int counter = 1;
    int number;
    int largest = 0;
    int secondLargest = 0;

    while (counter <= 10) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number > largest) {
            secondLargest = largest;
            largest = number;
        }
        else if (number > secondLargest) {
            secondLargest = number;
        }
        counter++;
    }
    printf("Largest number is: %d\n", largest);
    printf("Second largest number is: %d\n", secondLargest);
    return 0;
}