#include<stdio.h>       

int StrlenX(char *str)    
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};  //it may avoid garbage value
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n]s",&Arr);         // ^ indicates -ve in REGEX

    iRet = StrlenX(Arr);

    printf("Number of Characters are : %d",iRet);

    return 0;
}

