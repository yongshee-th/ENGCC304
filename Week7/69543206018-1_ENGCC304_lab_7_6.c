#include <stdio.h>

int main() {
    int a,sum=0;
    do {
        scanf("%d", &a);
        sum += a;
    } while (a != 0);
    printf("Sum = %d", sum);
    return 0;
}