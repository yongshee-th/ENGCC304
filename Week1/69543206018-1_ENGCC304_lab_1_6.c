#include <stdio.h>

int main() {
    char Source_Code[50];
    char Compiler[50];
    char Program[50];

    if (scanf("%49s %49s %49s", Source_Code, Compiler, Program) == 3) {
        printf("Source Code: %s\n", Source_Code);
        printf("Compiler: %s\n", Compiler);
        printf("Program: %s\n", Program);
    }

    return 0;
}