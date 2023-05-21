#include <stdio.h>

multiDimensionalArray();

int main()
{
    long long numbers[] = {2, 24, 324, 3434};
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    {
        printf("%d \n", numbers[i]);
    }

    multiDimensionalArray();

    return 0;
}

int multiDimensionalArray()
{
    int multiDimension[2][3] = {
        {1, 2, 3},
        {10, 20, 30}};
    printf("%d \n", multiDimension[1][0]);

    for (int i = 0; i < sizeof(multiDimension) / sizeof(multiDimension[0]); i++)
    {
        for (int j = 0; j < sizeof(multiDimension[0]) / sizeof(multiDimension[0][0]); j++)
        {
            printf("%d \n", multiDimension[i][j]);
        };
    }
}