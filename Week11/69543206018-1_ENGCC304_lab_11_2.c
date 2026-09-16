#include <stdio.h>
#include <string.h>
int main() {
    char str[10];
    int len;
    scanf("%9s", str);
    len = strlen(str);
    printf("Last = %d\n", len);
    return 0;
}