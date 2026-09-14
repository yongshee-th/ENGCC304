#include <stdio.h>

int main() {
    int number[3], first,Last;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &number[i]);
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            if (number[j] > number[j + 1]) {
                int temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        printf("%d\n", number[i]);
    }
    return 0;
}