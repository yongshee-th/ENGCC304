#include <stdio.h>

int main() {
    int a,b,c,output = 0;
    scanf("%d %d", &a , &b);
    scanf("%d", &c);
    switch (c) {
        case 1:
            output = a + b;
            break;
        case 2:
            output = a - b;
            break;
        case 3:
            output = a * b;
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    if (output != 0) {
        printf("Result = %d", output);
    }
    return 0;
}