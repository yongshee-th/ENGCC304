#include <stdio.h>

int main() {
    FILE *fp;
    int number, result;

    scanf("%d", &number);

    fp = fopen("bug.txt", "w");
    fprintf(fp, "%d", number);
    fclose(fp);

    fp = fopen("bug.txt", "r");
    fscanf(fp, "%d", &result);
    fclose(fp);

    printf("Number = %d\n", result);
    return 0;
}