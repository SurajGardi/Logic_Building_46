#include<stdio.h>

void Display(char *str)
{
    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

}

int main()
{
    char Arr[50] = {'\0'};  //it may avoid garbage value

    printf("Enter String : ");
    scanf("%[^'\n]s",&Arr);         // ^ indicates -ve in REGEX

    Display(Arr);

    return 0;
}