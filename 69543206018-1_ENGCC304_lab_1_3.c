#include <stdio.h>
#include <string.h>

int main(){
    char data[100];
    scanf("%[^\n]", data); // Read a line of input until newline character

    char *str[3];
    int i = 0;
    char *token = strtok(data, " ");

    // Tokenize the input string based on spaces and store the tokens in the str array
    while (token != NULL && i < 3) {
        str[i] = token;
        token = strtok(NULL, " ");
        i++;
    }

    // Print the extracted tokens
    printf("Student ID: %s\n", str[0]);
    printf("Nickname: %s\n", str[1]);
    printf("Section: %s\n", str[2]);

    return 0;
}