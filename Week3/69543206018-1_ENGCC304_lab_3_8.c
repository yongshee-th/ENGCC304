#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a >=350 || b == 1) {
        printf("Free Shipping\n");
    }else {
        printf("Shipping Required\n");
    }
    return 0;
}