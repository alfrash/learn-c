#include <stdio.h>

/// @brief 
int number;
int sum();

int main()
{
    scanf("%d", &number);
    printf("%d", sum(number));
    return 0;
}

int sum(int number) {
    if (number > 0)
    {
        return number + sum(number - 1);
    }else {
        return 0;
    }
}