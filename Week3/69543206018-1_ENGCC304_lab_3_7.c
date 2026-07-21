#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a >= 30) {
        printf("Hot\n");
    }else if (a >= 20) {
        printf("Normal\n");
    } else {
        printf("Cold\n");
    }
    return 0;
}