#include <stdio.h>

int main() {
    int arr[5];
    int count = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (arr[i] > 50) {
            count++;
        }
    }
    printf("Count = %d\n", count);
    return 0;
}