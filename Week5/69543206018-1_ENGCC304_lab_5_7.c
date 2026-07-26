#include <stdio.h>

int main() {
    int n,i,Max;
    for (i = 1; i <= 5; i++) {
        scanf("%d", &n);
        if (i == 1 || n > Max) {
            Max = n;
        }else if (n>Max) {
            Max = n;
        }
    }
    printf("Max = %d\n", Max);
    return 0;
}