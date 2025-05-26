// Problems on Strings
// for string with multiple words
// for including space => use Regex (   [^'\n']   )

#include<stdio.h>

int main()
{
    char Arr[50];

    printf("Enter your Name : \n");
    scanf("%[^'\n']s",Arr);

    printf("Your Name is : %s\n",Arr);
    
    return 0;
}