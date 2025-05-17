//Iteration

#include<stdio.h>

int Display(int iNo)
{
    int iCnt = 0, iSum = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the Frequency : ");
    scanf("%d",&iValue);

    iRet = Display(iValue);

    printf("Summetion is %d : \n ",iRet);
    return 0;
}