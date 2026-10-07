#include <stdio.h>

int main(){
    int number[4],numfromfile[4],Count = 0;
    scanf("%d", &number[0]);
    scanf("%d", &number[1]);
    scanf("%d", &number[2]);
    scanf("%d", &number[3]);
    
    FILE *file = fopen("even.txt", "w");
    fprintf(file, "%d %d %d %d", number[0], number[1], number[2], number[3]);
    fclose(file);

    file = fopen("even.txt", "r");
    fscanf(file, "%d %d %d %d", &numfromfile[0], &numfromfile[1], &numfromfile[2], &numfromfile[3]);
    fclose(file);
    
    for(int i = 0; i < 4; i++){
        if(numfromfile[i] % 2 == 0){
            Count++;
        }
    }

    printf("Count = %d", Count);
}