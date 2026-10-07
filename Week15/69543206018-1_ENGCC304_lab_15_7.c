#include <stdio.h>

struct student{
    int id;
    int score;
};

int main(){
    struct student s;

    scanf("%d %d", &s.id, &s.score);

    FILE *file = fopen("student.txt", "w");
    fprintf(file, "%d %d", s.id, s.score);
    fclose(file);

    file = fopen("student.txt", "r");
    fscanf(file, "%d %d", &s.id, &s.score);
    fclose(file);
    printf("ID = %d\n", s.id);
    printf("Score = %d\n", s.score);
}