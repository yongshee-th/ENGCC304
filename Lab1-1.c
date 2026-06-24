#include <stdio.h>

int main(void) {
    char name[100];
    scanf("%99s", name);
    printf("Hello, %s\nWelcome to C Programming", name);
    return 0;
}
