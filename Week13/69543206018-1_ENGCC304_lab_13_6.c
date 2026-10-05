#include <stdio.h>

int sumArray(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int number[4];
    for(int i = 0; i < 4; i++){
        scanf("%d", &number[i]);
    }
    int result = sumArray(number, 4);
    printf("Sum = %d\n", result);
    return 0;
}
