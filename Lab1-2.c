#include <stdio.h>

int main() {
    char name[50];
    int age;

    scanf("%s", name);
    scanf("%d", &age);

    printf("My name is %s\n", name);
    printf("I am %d years old.\n", age);

    return 0;
}