#include <stdio.h>

int main() {
    char language[20],compiler[20],Program[20];
    scanf("%s %s %s", language, compiler, Program);
    printf("Language: %s\n", language);
    printf("Compiler: %s\n", compiler);
    printf("Output Program: %s\n", Program);
    return 0;
}