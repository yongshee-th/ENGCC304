#include <stdio.h>

void addTen(int *x) {
    *x = *x + 10;
}

int main(){
    int number;
    scanf("%d", &number);
    addTen(&number);
    printf("Result = %d\n", number);
    return 0;
}
