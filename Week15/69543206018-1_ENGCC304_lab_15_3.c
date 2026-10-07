#include <stdio.h>

int main(){
    int number1 = 0,number2 = 0,numfromfile1 = 0,numfromfile2 = 0;
    FILE *file;

    scanf("%d", &number1);
    file = fopen("append.txt", "w");
    fprintf(file, "%d", number1);
    fclose(file);

    scanf("%d", &number2);
    file = fopen("append.txt", "a");
    fprintf(file, " %d", number2);
    fclose(file);

    file = fopen("append.txt", "r");
    fscanf(file, "%d %d", &numfromfile1, &numfromfile2);
    fclose(file);
    printf("Sum = %d\n", numfromfile1+numfromfile2);
}