#include <stdio.h>

int main() {
    int number[2], small,Large;
    for (int i = 0; i < 2; i++) {
        scanf("%d\n", &number[i]);
    }
    for (int i = 0; i < 2; i++) {
        if (i == 0) {
            small = number[i];
            Large = number[i];
        } else {
            if (number[i] < small) {
                small = number[i];
            }
            if (number[i] > Large) {
                Large = number[i];
            }
        }
    }
    printf("Small = %d\n", small);
    printf("Large = %d\n", Large);
    return 0;
}