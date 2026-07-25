#include <stdio.h>

int main() {
    int Grade_number;
    char *Grade_letter = NULL;

    if (scanf("%d", &Grade_number) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    switch (Grade_number) {
        case 4:
            Grade_letter = "A";
            break;
        case 3:
            Grade_letter = "B";
            break;
        case 2:
            Grade_letter = "C";
            break;
        case 1:
            Grade_letter = "D";
            break;
        case 0:
            Grade_letter = "F";
            break;
        default:
            Grade_letter = NULL;
            break;
    }

    if (Grade_letter == NULL) {
        printf("Invalid grade\n");
    } else {
        printf("Grade = %s\n", Grade_letter);
    }

    return 0;
}