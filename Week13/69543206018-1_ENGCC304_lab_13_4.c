#include <stdio.h>

int sumTwo(int a, int b) {
    return a + b;
}

int main(){
    int number1, number2, result;
    scanf("%d %d", &number1, &number2);
    result = sumTwo(number1, number2);
    printf("Sum = %d\n", result);
    return 0;
}
