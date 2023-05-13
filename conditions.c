#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 40;
    if (age >= 30)
    {
        printf("انت عجزت\n");
    }
    else
    {
        printf("you still yong\n");
    }

    bool result = (age > 25) ? true : false;

    switch (result)
    {
    case true:
        printf("old\n");
        break;
    case false:
        printf("yong\n");
    }

    int day;
    printf("enter day from 1 to 7: ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("saturday");
        break;
    case 2:
        printf("sunday");
        break;
    case 3:
        printf("monday");
        break;
    case 4:
        printf("tuesday");
        break;
    case 5:
        printf("wednesday");
        break;
    case 6:
        printf("thursday");
        break;
    case 7:
        printf("friday");
        break;

    default:
        printf("wrong");
        break;
    }
    return 0;
}