#include<stdio.h>       

int CountSpace(char *str)    
{
    int iCount = 0;

    while(*str != '\0')
    {

        if(*str == ' ')
        {
            iCount++;
        }
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

    iRet = CountSpace(Arr);

    printf("The Number of White Spaces are : %d",iRet);

    return 0;
}

