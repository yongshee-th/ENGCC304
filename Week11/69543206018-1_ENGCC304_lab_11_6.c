#include <stdio.h>
#include <string.h>

int main() {
    char strbefore[10], strafter[10];
    scanf("%9s", strbefore);
    int len = strlen(strbefore);
    for (int i = 0; i < len; i++) {
        strafter[i] = strbefore[len - 1 - i];
    }
    strafter[len] = '\0';
    printf("%s\n", strafter);

    return 0;
}