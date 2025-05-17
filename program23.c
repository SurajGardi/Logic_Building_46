#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    return(((iNo % 3)== 0) && ((iNo % 5)== 0));
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter number to check whether it is Divisible by 3 & 5 : ");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is Divisible by 3 & 5",iValue);
    }
    else
    {
        printf("%d is NOT Divisible by 3 or 5",iValue);
    }

    return 0;
}