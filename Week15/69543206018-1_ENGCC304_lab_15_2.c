#include <stdio.h>

int main(){
    int number1 = 0,number2 = 0,numfromfile = 0;
    scanf("%d %d", &number1, &number2);

    FILE *file = fopen("two_number.txt", "w");
    fprintf(file, "%d", number1 + number2);
    fclose(file);

    file = fopen("two_number.txt", "r");
    fscanf(file, "%d", &numfromfile);
    fclose(file);
    printf("Sum = %d\n", numfromfile);
}