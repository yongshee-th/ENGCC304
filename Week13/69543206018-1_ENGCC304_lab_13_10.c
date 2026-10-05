#include <stdio.h>

void addOne(int *x) {
    *x = *x + 1;
}

int main() {
    int number;
    scanf("%d", &number);
    addOne(&number);
    printf("Result = %d\n", number);
    return 0;
}