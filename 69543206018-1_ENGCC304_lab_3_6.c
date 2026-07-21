#include <stdio.h>

int main() {
    int a, b ,c,Max;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c){
        Max = a;
    } else if (b > a && b > c){
        Max = b;
    } else {
        Max = c;
    }
    printf("Max = %d\n", Max);
    return 0;
}