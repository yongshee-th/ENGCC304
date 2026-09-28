#include <stdio.h>

int isEven(int n);

int main() {
    int n;
    scanf("%d", &n);
    if (isEven(n)) {
        printf("Even");
    } else {
        printf("Odd");
    }
    return 0;
}

int isEven(int n) {
    return n % 2 == 0;
}