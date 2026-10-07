#include <stdio.h>

int main(){
    int number = 0,numfromfile = 0;
    scanf("%d", &number);
    
    FILE *file = fopen("number.txt", "w");
    fprintf(file, "%d", number);
    fclose(file);

    file = fopen("number.txt", "r");
    fscanf(file, "%d", &numfromfile);
    fclose(file);
    printf("Number = %d\n", numfromfile);
}