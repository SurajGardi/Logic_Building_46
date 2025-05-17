#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit)
        iNo = iNo / 10;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");      
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("Number of Even Digits are : %d \n",iRet);

    return 0;
}