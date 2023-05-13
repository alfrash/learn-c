#include <stdio.h>

void addNumbers(int firstNumber, int secondNumber){
    int sum = firstNumber + secondNumber;
    printf("%d\n", sum);
}

void squareArea(int sideLength){
    printf("square area = %d\n", sideLength * sideLength);
}

int rectangleArea(int length, int width){
    return length * width;
}

int main() {
    addNumbers(4, 6);
    addNumbers(5, 7);
    addNumbers(6, 8);
    addNumbers(7, 9);
    squareArea(5);
    squareArea(6);
    squareArea(7);
    printf("rectangle area = %d\n", rectangleArea(5, 6));
    printf("rectangle area = %d\n", rectangleArea(7, 3));
    return 0;
}