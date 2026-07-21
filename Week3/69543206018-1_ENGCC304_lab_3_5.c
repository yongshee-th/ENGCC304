#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a >= 18){
        printf("Adult\n");
    } else {
        printf("Minor\n");
    }
    return 0;
}