#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    switch (a) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel\n");
            break;
        default:
            printf("Consonant\n");
            break;
    }
    return 0;
}