#include <stdio.h>

int main () {
    int a = 6;
    int b = 7;
    int x, y;

    x = ++a;
    y = b++;

    printf("x = %d, a = %d\n", x, a);
    printf("y = %d, b = %d\n", y, b);

    return 0;
}