#include <stdio.h>

int main() {
    int arr[5];
    int Count = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            Count++;
        }
    }
    printf("Count = %d\n", Count);
    return 0;
}