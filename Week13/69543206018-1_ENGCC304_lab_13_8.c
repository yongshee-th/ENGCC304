#include <stdio.h>

void incrementFirst(int arr[]){
    arr[0] = arr[0] + 1;
}

int main(){
    int number[3];
    for(int i = 0; i < 3; i++){
        scanf("%d", &number[i]);
    }
    incrementFirst(number);
    for(int i = 0; i < 3; i++){
        printf("%d\n", number[i]);
    }
    return 0;
}
