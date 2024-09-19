#include <iostream>

int main() {
    int score = 10;
    int *myP = &score;

    printf("%d\n", score);
    printf("%p\n", myP);

    int &anotherScore = score;
    anotherScore = 110;

    printf("%d\n", score);
    printf("%p\n", myP);

    return 0;
}