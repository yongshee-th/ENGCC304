#include <stdio.h>

int main(){
    int number;
    int *ptr;
    scanf("%d", &number);
    ptr = &number;
    printf("Value = %d\n", *ptr);
    return 0;
}
