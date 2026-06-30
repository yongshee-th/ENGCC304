#include <stdio.h>

int main() {
    char ID[6] ,Name[20];
    int Age;
    scanf("%5s", ID);
    scanf("%19s", Name);
    scanf("%d", &Age);
    printf("Student ID: %s\n", ID);
    printf("Name: %s\n", Name);
    printf("Age: %d\n", Age);
    return 0;
}