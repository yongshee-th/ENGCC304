#include <stdio.h>

int main(void) {
    int a, b, c;
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input\n");
        return 1;
    }
    if (scanf("%d", &c) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    switch (c) {
        case 1:
            printf("Result = %d\n", a + b);
            break;
        case 2:
            printf("Result = %d\n", a - b);
            break;
        default:
            printf("Invalid\n");
            break;
    }

    return 0;
}