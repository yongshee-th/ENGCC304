#include <stdio.h>

int areaRectangle(int width, int height);

int main() {
    int width, height;
    scanf("%d %d", &width, &height);
    printf("%d", areaRectangle(width, height));
    return 0;
}

int areaRectangle(int width, int height) {
    return width * height;
}