#include <stdio.h>

int main() {
    int arr[3], i, min;
    for (i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (i = 1; i < 3; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Min = %d\n", min);
    return 0;
}