#include <stdio.h>

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    printf("First = %d\n", arr[0]);
    printf("Last = %d\n", arr[4]);
    return 0;
}