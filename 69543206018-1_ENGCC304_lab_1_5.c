#include <stdio.h>

int main() {
    char hardware[50];
    char software[50];

    if (scanf("%49s %49s", hardware, software) == 2) {
        printf("Hardware: %s\n", hardware);
        printf("Software: %s\n", software);
        printf("Both work together.\n");
    }

    return 0;
}