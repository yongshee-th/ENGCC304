#include <stdio.h>

int main() {
    char text[100];

    scanf(" %99[^\n]", text);

    printf("+-----------+\n");
    printf("| %s |\n", text);
    printf("+-----------+\n");

    return 0;
}