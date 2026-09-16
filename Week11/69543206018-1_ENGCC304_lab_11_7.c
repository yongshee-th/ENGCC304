#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    // Remove newline character if present
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    printf("Length = %d\n", len);

    return 0;
}