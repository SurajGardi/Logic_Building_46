#include<stdio.h>       

int Count(char *str)    
{
    int iCount = 0;

    while(*str != '\0')
    {

        if(*str == 'a')
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

    printf("Enter String : \n");
    scanf("%[^'\n]s",&Arr);         // ^ indicates -ve in REGEX

    iRet = Count(Arr);

    printf("The Number of 'a' Characters are : %d\n",iRet);

    return 0;
}

