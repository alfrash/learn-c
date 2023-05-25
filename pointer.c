#include <stdio.h>

int main () {

    int number = 5;
    // pointer to int number
    int *ptr = &number;
    // pointer to pointer
    int **ptr_of_ptr = &ptr;
    // pointer reference
    printf("%p \n", ptr);
    printf("%p \n", ptr_of_ptr);
    // pointer value
    printf("%d \n", *ptr);
    printf("%d \n", **ptr_of_ptr);
    // dynamic pointer
    char letter = 'A';
    int id = 2356;
    void *dynamicPtr = &letter;
    printf("%c \n", *(char *)dynamicPtr);

    dynamicPtr = &id;
    printf("%d \n", *(int *)dynamicPtr);

    // array
    int arr[] = {21, 22, 23};
    int *arrPtr = arr;

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%d \n", *arrPtr);
        arrPtr++;
    }

    return 0;
}