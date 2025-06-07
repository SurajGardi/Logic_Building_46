#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};  //it may avoid garbage value

    printf("Enter Your Name : ");
    scanf("%s",&Arr);         // it not taking 2nd word in string

    printf("Your Name is : %s",Arr);
    return 0;
}