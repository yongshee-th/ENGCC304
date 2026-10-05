#include <stdio.h>

int findMax(int *a, int *b) {
    if (*a > *b) {
        return *a;
    }
    return *b;
}

int main(){
    int number1, number2, max;
    scanf("%d %d", &number1, &number2);
    max = findMax(&number1, &number2);
    printf("Max = %d\n", max);
    return 0;
}
