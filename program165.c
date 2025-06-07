#include<stdio.h>       // Converting while to for

void Display(char *str)    // Array is internally treated as pointer
{
    int i = 0;

    for(i = 0; str[i] != '\0'; i++) // No1,No2,No3,No4 all are optional
    {
        printf("%c",str[i]);
    }
}

int main()
{
    char Arr[50] = {'\0'};  //it may avoid garbage value

    printf("Enter String : ");
    scanf("%[^'\n]s",&Arr);         // ^ indicates -ve in REGEX

    Display(Arr);

    return 0;
}

