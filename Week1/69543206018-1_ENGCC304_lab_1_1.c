#include <stdio.h>

int main(){
    char name[50];

    scanf("%s", name);
    
    if (name[0] == '\0') {
        printf("No name entered.\n");
        return 1;
    }

    printf("Hello, %s\n", name);
    printf("Welcome to C Programming\n");
    
    return 0;
}