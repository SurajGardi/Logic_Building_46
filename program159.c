#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};  //it may avoid garbage value

    printf("Enter Your Name : ");
    scanf("%[^'\n']s",&Arr);         // Take input till not getting next line
                                    //   ^ indicates -ve in REGEX : 

    printf("Your Name is : %s",Arr);
    return 0;
}