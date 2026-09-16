#include <stdio.h>
#include <string.h>
int main() {
    char str[10];
    int len;
    scanf("%9s", str);
    len = strlen(str);
    printf("First = %c\n", str[0]);
    printf("Last = %c\n", str[len - 1]);
    return 0;
}