#include <stdio.h>
int sumByValue(int a, int b)
{
    a = a + b;
    return a;
}

int sumByReference(int *a, int *b)
{
    *a = *a + *b;
    return *a;
}

void calculate(int a, int b, int *multiply, int *addition)
{
    *multiply = a * b;
    *addition = a + b;
}

int main()
{

    int firstNumber = 20;
    int secondNumber = 30;

    printf("*******sumByValue********* \n");

    printf("%d \n", firstNumber);
    int resultByValue = sumByValue(firstNumber, secondNumber);
    printf("%d \n", resultByValue);
    printf("%d \n", firstNumber);

    printf("*******sumByReference********* \n");

    printf("%d \n", firstNumber);
    int resultByReference = sumByReference(&firstNumber, &secondNumber);
    printf("%d \n", resultByReference);
    printf("%d \n", firstNumber);

    printf("*******calculate********* \n");
    int x = 40;
    int y = 50;
    int multiply;
    int addition;
    calculate(x, y, &multiply, &addition);
    printf("%d \n", multiply);
    printf("%d \n", addition);

    return 0;
}