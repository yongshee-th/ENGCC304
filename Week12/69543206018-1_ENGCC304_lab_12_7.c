#include <stdio.h>

char getGrade(int score);

int main() {
    int score;
    scanf("%d", &score);
    printf("%c", getGrade(score));
    return 0;
}

char getGrade(int score) {
    if (score >= 80) {
        return 'A';
    } else if (score >= 70) {
        return 'B';
    } else if (score >= 60) {
        return 'C';
    } else if (score >= 50) {
        return 'D';
    } else {
        return 'F';
    }
}