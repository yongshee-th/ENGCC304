#include <stdio.h>

void printHello(int n);

int main() {
    int n;
    scanf("%d", &n);
    printHello(n);
    return 0;
}

void printHello(int n) {
    for (int i = 0; i < n; i++) {
        printf("Hello\n");
    }
}