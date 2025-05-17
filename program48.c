#include<stdio.h>

int DisplayDigit(int iNo)
{
    int iCnt = 0;

    while(iNo != 0)
    {
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

    iRet = DisplayDigit(iValue);

    printf("Number of Digits are : %d \n",iRet);

    return 0;
}