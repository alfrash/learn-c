#include <stdio.h>

void myPrint(char *c)
{
    while (*c != '\0')
    {
        printf("%c", *c);
        c++;
    }

    printf("\n");
}

int main()
{

    char name[20] = "ahmed";
    myPrint(name);

    char *stringsArray[] = {"Ahmed", "Haidy", "Mohamed", "Alfrash"};
    printf("%s \n", stringsArray[1]);

    return 0;
}