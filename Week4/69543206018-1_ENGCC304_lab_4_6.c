#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    switch (a) {
        case 1:
            printf("Stop\n");
            break;
        case 2:
            printf("Ready\n");
            break;
        case 3:
            printf("Go\n");
            break;
        default:
            printf("Unknown signal\n");
    }
    return 0;
}