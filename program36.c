#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)             //Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) ==0 )
        {
            printf("Factor is : %d \n",iCnt);
        }
        else
        {
             printf("Non-Factor is : %d \n",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}