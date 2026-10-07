#include <stdio.h>

struct student{
    int id;
    int score;
};

int main(){
    struct student s1;
    struct student s2;
    scanf("%d %d %d %d", &s1.id, &s1.score, &s2.id, &s2.score);

    FILE *file = fopen("student.txt", "w");
    fprintf(file, "%d %d %d %d", s1.id, s1.score, s2.id, s2.score);
    fclose(file);

    file = fopen("student.txt", "r");
    fscanf(file, "%d %d %d %d", &s1.id, &s1.score, &s2.id, &s2.score);
    fclose(file);
    printf("Total Score = %d\n", s1.score + s2.score);
}