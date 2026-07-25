#include <stdio.h>

int main() {
    int a,b;
    scanf("%d", &a);
    switch (a) {
        case 1:
            b = 10;
            break;
        case 2:
            b = 15;
            break;
        case 3:
            b = 20;
            break;
        default:
            b = 0;
            break;
    }
    if (b == 0) {
        printf("Invalid menu");
    } else {
        printf("Price = %d", b);
    }
    return 0;
}