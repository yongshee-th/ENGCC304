#include <stdio.h>

int minThree(int a, int b, int c);

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", minThree(a, b, c));
    return 0;
}

int minThree(int a, int b, int c) {
    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    return min;
}