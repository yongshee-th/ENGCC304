#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b){
        printf("First is bigger\n");
    } else if (b > a){
        printf("Second is bigger\n");
    } else {
        printf("Equal\n");
    }
    return 0;
}