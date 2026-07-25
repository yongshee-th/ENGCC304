#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    switch (a) {
        case 'A':
            printf("Add\n");
            break;
        case 'D':
            printf("Delete\n");
            break;
        case 'U':
            printf("Update\n");
            break;
        default:
            printf("Unknown command\n");
            break;
    }
    return 0;
}