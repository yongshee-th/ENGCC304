#include <stdio.h>

int main(){
    int number[3],numfromfile[3],Max;
    scanf("%d %d %d", &number[0], &number[1], &number[2]);

    FILE *file = fopen("max_file.txt", "w");
    for(int i = 0; i < 3; i++){
        fprintf(file, "%d\n", number[i]);
    }
    fclose(file);

    file = fopen("max_file.txt", "r");
    for(int i = 0; i < 3; i++){
        fscanf(file, "%d", &numfromfile[i]);
    }
    fclose(file);
    Max = numfromfile[0];
    for(int i = 1; i < 3; i++){
        if(numfromfile[i] > Max){
            Max = numfromfile[i];
        }
    }
    printf("Max = %d\n", Max);
}