//Without Using Flag //Prime Number

#include<stdio.h>
#include<stdbool.h>

int CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)             //Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 2; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;
        }
    }

    return (iCnt > (iNo/2));
}

int main()
{
    int iValue = 0;
    bool bRet  = false;
    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet  = CheckPrime(iValue);
    if(bRet  == true)
    {
        printf("%d is Prime Number \n",iValue);
    }
    else
    {
        printf("%d is not Prime Number",iValue);
    }

    return 0;
}