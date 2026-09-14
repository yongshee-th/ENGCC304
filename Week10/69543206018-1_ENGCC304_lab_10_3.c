#include <stdio.h>

int main() {
    int number[5], Target, position = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d\n", &number[i]);
    }
    scanf("%d\n", &Target);
    for (int i = 0; i < 5; i++) {
        if (number[i] == Target) {
            position = i + 1;
            break;
        }
    }
    printf("Position = %d", position);
    return 0;
}