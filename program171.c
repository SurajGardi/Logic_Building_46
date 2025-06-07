#include<stdio.h>       

int CountSmall(char *str)    
{
    int iCount = 0;


    while(*str != '\0')
    {

        if((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(Arr);

    printf("Number of Small Characters are : %d",iRet);

    return 0;
}

