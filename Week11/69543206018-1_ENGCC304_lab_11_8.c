#include <stdio.h>
#include <string.h>

int main() {
    int str[10];
    for (int i = 0; i < 4; i++) {
        scanf(" %d", &str[i]);
    }
    for (int i = 0; i < 4; i++) {
        printf("%d", str[i]);
        if (i % 2 == 1) {
            printf("\n");
        }else {
            printf(" ");
        }
    }

    return 0;
}