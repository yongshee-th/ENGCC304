#include <stdio.h>
#include <string.h>

int main() {
    char str1[10], str2[10];
    scanf("%9s", str1);
    scanf("%9s", str2);
    if (strcmp(str1, str2) == 0) {
        printf("Same\n");
    } else {
        printf("Different\n");
    }
    return 0;
}