#include <stdio.h>

int main() {
    int str[4],sum = 0;
    for (int i = 0; i < 4; i++) {
        scanf("%d", &str[i]);
    }
    for (int i = 0; i < 4; i++) {
        sum += str[i];
    }
    printf("Sum = %d\n", sum);

    return 0;
}