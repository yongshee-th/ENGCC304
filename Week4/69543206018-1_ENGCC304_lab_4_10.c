#include <stdio.h>

int main() {
    int menu;
    scanf("%d", &menu);
    switch (menu) {
        case 1:
            printf("Hello\n");
            break;
        case 2:
            printf("Bye\n");
            break;
        default:
            printf("Invalid\n");
    }
    return 0;
}