#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("Meter = %d\n", a / 100);
    printf("Centimeter = %d\n", a % 100);
    return 0;
}