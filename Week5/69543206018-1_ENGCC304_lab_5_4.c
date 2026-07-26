#include <stdio.h>

int main() {
    int n,i,sum=0;
    for (i = 1; i <= 5; i++) {
        scanf("%d", &n);
        sum += n;
    }
    printf("Sum = %d\n", sum);
    return 0;
}