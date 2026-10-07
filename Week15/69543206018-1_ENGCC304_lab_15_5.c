#include <stdio.h>

int main(){
    int number[4],numfromfile[4],sum=0;
    scanf("%d", &number[0]);
    scanf("%d", &number[1]);
    scanf("%d", &number[2]);
    scanf("%d", &number[3]);

    FILE *file = fopen("sum_file.txt", "w");
    for(int i = 0; i < 4; i++){
        fprintf(file, "%d\n", number[i]);
    }
    fclose(file);

    file = fopen("sum_file.txt", "r");
    for(int i = 0; i < 4; i++){
        fscanf(file, "%d", &numfromfile[i]);
    }
    fclose(file);
    for(int i = 0; i < 4; i++){
        sum += numfromfile[i];
    }
    printf("Sum = %d\n", sum);
}