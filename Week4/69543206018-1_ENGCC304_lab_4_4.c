#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    switch (a) {
        case 1:
            printf("Jan\n");
            break;
        case 2:
            printf("Feb\n");
            break;
        case 3:
            printf("Mar\n");
            break;
        case 4:
            printf("Apr\n");
            break;
        default:
            printf("Invalid month\n");
            break;
    }
    return 0;
}