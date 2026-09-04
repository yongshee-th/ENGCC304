#include <stdio.h>

int main() {
    int arr[5];
    int Max = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    Max = arr[0];
    for (int i = 0; i < 5; i++) {
        if (arr[i] > Max) {
            Max = arr[i];
        }
    }
    printf("Max = %d\n", Max);
    return 0;
}