#include <stdio.h>

int main() {
    int number[5], Target,Count = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &number[i]);
    }
    scanf("%d", &Target);
    for (int i = 0; i < 5; i++) {
        if (number[i] == Target) {
            Count++;
        }
    }
    printf("Count = %d", Count);
    return 0;
}