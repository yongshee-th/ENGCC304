#include <stdio.h>

int main() {
    int number[5], Target;
    for (int i = 0; i < 5; i++) {
        scanf("%d\n", &number[i]);
    }
    scanf("%d\n", &Target);
    for (int i = 0; i < 5; i++) {
        if (number[i] == Target) {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 0;
}