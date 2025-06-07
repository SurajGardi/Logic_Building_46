#include<stdio.h>       // Avoid ASCII values

int CountCapital(char *str)    
{
    int iCount = 0;


    while(*str != '\0')
    {

        if((*str >= 65) && (*str <= 90))
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

    iRet = CountCapital(Arr);

    printf("Number of Capital Characters are : %d",iRet);

    return 0;
}

