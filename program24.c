#include<stdio.h>

int Summetion(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ",iCnt);
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Summetion(iValue);

    printf("Summetion is : %d ",iRet);

    return 0;
}