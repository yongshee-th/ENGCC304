#include <stdio.h>

int main() {
    char message[50];
    scanf("%49s", message);
    printf("Message: %s\n", message);
    printf("End of program\n");
    return 0;
}