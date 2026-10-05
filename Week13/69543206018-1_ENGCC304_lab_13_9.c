#include <stdio.h>

int countEven(int arr[], int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            count++;
        }
    }
    return count;
}

int main(){
    int number[4];
    for(int i = 0; i < 4; i++){
        scanf("%d", &number[i]);
    }
    int result = countEven(number, 4);
    printf("Count = %d\n", result);
    return 0;
}
