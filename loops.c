#include <stdio.h>
#include <stdbool.h>

int main()
{
    int count = 0;
    int rows;
    scanf("%d", &rows);
    while (count < rows)
    {
        int stars = 0;
        while (stars < count)
        {
            printf("*");
            stars++;
        }

        printf("*\n");
        count++;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("*\n");
    }

    int range = 11;
    while (range > 0)
    {
        printf("%d\n", range);
        if (range % 5 == 0)
        {
            break;
        }
        range++;
    }

    int a = 0;
    int b = 100;

    while (a < b)   
    {
        a++;
        if (a%2 != 0)
        {
            
            continue;
        }
        printf("%d\n", a);
    }

    return 0;
}