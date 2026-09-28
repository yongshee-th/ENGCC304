#include <stdio.h>

int absoluteValue(int n);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", absoluteValue(n));
    return 0;
}

int absoluteValue(int n) {
    if (n < 0) {
        return -n;
    } else {
        return n;
    }
}