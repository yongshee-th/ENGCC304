#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int number1, number2;
    scanf("%d %d", &number1, &number2);
    swap(&number1, &number2);
    printf("First = %d\n", number1);
    printf("Second = %d\n", number2);
    return 0;
}
