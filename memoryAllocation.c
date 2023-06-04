#include "stdio.h"
#include "stdlib.h"

int *mallocPtr;
int *callocPtr;

void method1() 
{
    mallocPtr = malloc(sizeof(int));
    callocPtr = calloc(4, sizeof(int));
    // int number = 123;
    // ptr = &number;
    *mallocPtr = 125;
    *callocPtr = 126;
    printf("method1: %d \n", *mallocPtr);
    printf("method1: %d \n", *callocPtr);
}

void method2()
{
    printf("method2: %d \n", *mallocPtr);
    printf("method2: %d \n", *callocPtr);
}

int main()
{
    method1();
    printf("************* \n");
    method2();
    printf("************* \n");
    int *ptr = malloc(4 * sizeof(int));
    if (ptr == NULL){
        printf("allocation failed");
    }else{
        *ptr = 5;
        *(ptr + 1) = 6;
        *(ptr + 2) = 7;
        *(ptr + 3) = 8;
    }
    ptr = realloc(ptr, 6 * sizeof(int));
    if (ptr == NULL)
    {
        printf("allocation failed");
    }
    else
    {
        *(ptr + 4) = 9;
        *(ptr + 5) = 10;
       
    }

    printf("%d \n", *(ptr + 5));

    return 0;
}