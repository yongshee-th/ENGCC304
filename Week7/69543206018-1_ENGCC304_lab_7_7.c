#include <stdio.h>

int main() {
    int a;
    do {
        scanf("%d", &a);
        if (a == 1234) {
            printf("Correct\n");
        } else {
            printf("Wrong\n");
        }
    } while (a != 1234);
    return 0;
}