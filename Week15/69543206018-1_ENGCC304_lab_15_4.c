#include <stdio.h>

int main(){
    int number[3],numfromfile[3];
    scanf("%d", &number[0]);
    scanf("%d", &number[1]);
    scanf("%d", &number[2]);

    FILE *file = fopen("array.txt", "w");
    for(int i = 0; i < 3; i++){
        fprintf(file, "%d\n", number[i]);
    }
    fclose(file);

    file = fopen("array.txt", "r");
    for(int i = 0; i < 3; i++){
        fscanf(file, "%d", &numfromfile[i]);
    }
    fclose(file);
    for(int i = 0; i < 3; i++){
        printf("%d\n",numfromfile[i]);
    }
}