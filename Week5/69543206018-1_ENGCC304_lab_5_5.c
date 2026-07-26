#include <stdio.h>

int main() {
    int n,i,sum=0;
    for (i = 1; i <= 4; i++) {
        scanf("%d", &n);
        sum += n;
    }
    printf("Average = %d\n", sum/4);
    return 0;
}