// Problems on Strings

#include<stdio.h>

void Display(char str[])
{
    printf("Your Name is : %s \n",str);
}

int main()
{
    char Arr[50];

    printf("Enter your Name : \n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);
    
    return 0;
}