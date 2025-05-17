#include<stdio.h>

#define ERR_INVALID -1

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        return ERR_INVALID;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        //printf("%d ",iCnt);
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    if(iRet == ERR_INVALID)
    {
        printf("Invalid Input \n");
    }
    else
    {
        printf("Factorial is : %d ",iRet);
    }

    return 0;
}