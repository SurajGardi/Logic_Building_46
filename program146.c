// Problems on Strings

#include<stdio.h>
#include<stdbool.h>


bool CheckCapital(char ch)
{
    if(ch > 65)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter your Character : \n");
    scanf("%c",&cValue);

    bRet = CheckCapital(cValue);

    if(bRet == true)
    {
        printf("%c is capital",iValue);
    }
    else
    {
        printf("%c is not capital",iValue);
    }
    return 0;
}