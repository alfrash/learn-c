#include <stdio.h>
#include <stdbool.h>


void bigNumber(){
    int number, big = 0;
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &number);
        if (number > big)
        {
            big = number;
        }
    }
    printf("big number is : %d",big);
}

int main(){
    bigNumber();
    return 0;
}