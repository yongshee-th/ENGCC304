#include <stdio.h>

int main() {
    int arr[3], i, sum = 0;
    for (i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 3; i++) {
        sum = sum + arr[i];
    }
    printf("Sum = %d\n", sum);
    return 0;
}