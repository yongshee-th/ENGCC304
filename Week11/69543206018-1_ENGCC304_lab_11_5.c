#include <stdio.h>

int main() {
    char str[10];
    int count = 0;
    scanf("%9s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a'){
            count++;
        }
    }
    printf("Count = %d\n", count);
    return 0;
}