#include <stdio.h>

int main() {
    int a,b,o;
    scanf("%d %d",&a,&b);
    scanf("%d",&o);
    switch (o)
    {
    case 1:
        printf("Result = %d", a + b);
        break;
    case 2:
        printf("Result = %d", a - b);
        break;
    default:
        printf("Invalid");
        break;
    }
    return 0;
}