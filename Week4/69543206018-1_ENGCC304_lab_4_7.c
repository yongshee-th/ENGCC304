#include <stdio.h>

int main() {
    int choice, value;
    scanf("%d", &choice);
    scanf("%d", &value);
    switch (choice)
    {
    case 1:
        printf("Result = %d\n", value / 100);
        break;
    case 2:
        printf("Result = %d\n", value * 1000);
        break;
    default:
        printf("Invalid menu\n");
        break;
    }
}