#include <stdio.h>
#include <string.h>

int main(){
    char data[100];
    scanf("%[^\n]", data); // Read a line of input until newline character

    char *str[2];
    int i = 0;
    char *token = strtok(data, " ");

    // Tokenize the input string based on spaces and store the tokens in the str array
    while (token != NULL && i < 2) {
        str[i] = token;
        token = strtok(NULL, " ");
        i++;
    }

    // Print the extracted tokens
    printf("Course: %s\n", str[0]);
    printf("Language: %s\n", str[1]);
    printf("Week: 1\n");

    return 0;
}