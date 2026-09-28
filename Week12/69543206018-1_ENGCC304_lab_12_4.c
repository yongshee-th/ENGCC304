#include <stdio.h>

int maxTwo(int a, int b);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", maxTwo(a, b));
    return 0;
}

int maxTwo(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}