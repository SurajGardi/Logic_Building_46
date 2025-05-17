#include<stdio.h>

int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)             //Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) ==0 )
        {
            //printf("%d \n",iCnt);
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);

    printf("Sum of Factors is : %d",iRet);

    return 0;
}