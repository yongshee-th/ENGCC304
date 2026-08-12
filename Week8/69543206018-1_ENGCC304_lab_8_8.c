#include <stdio.h>

int main() {
    int a,sum=0;
    do{
        scanf("%d",&a);
        if (a == 0) {
            break;
        }
        sum += a;
    } while (1);
    printf("Sum = %d\n", sum);
    return 0;
}