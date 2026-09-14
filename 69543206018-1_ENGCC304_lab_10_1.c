#include <stdio.h>

int main() {
    int number[5], min;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &number[i]);
    }
    min = number[0];
    for (int i = 1; i < 5; i++) {
        if (number[i] < min) {
            min = number[i];
        }
    }
    printf("Min = %d\n", min);
    return 0;
}