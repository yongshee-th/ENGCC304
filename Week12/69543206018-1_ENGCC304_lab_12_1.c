#include <stdio.h>

int sumTwo(int a, int b);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", sumTwo(a, b));
    return 0;
}

int sumTwo(int a, int b) {
    return a + b;
}