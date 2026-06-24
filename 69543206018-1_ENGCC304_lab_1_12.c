#include <stdio.h>

int main() {
    char text[100];

    scanf(" %99[^\n]", text);

    printf("You typed: \"%s\"\n", text);

    return 0;
}