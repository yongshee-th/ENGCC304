#include <stdio.h>

int main() {
    int number[4], first,Last;
    for (int i = 0; i < 4; i++) {
        scanf("%d", &number[i]);
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (number[j] < number[j + 1]) {
                int temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }
    printf("Second = %d\n", number[1]);
    return 0;
}