//Input : 4
// by seperated loop
// Output : -4  -3  -2  -1  0   1   2   3   4

/*
    Start
        Accept the frequency
        Iterete from 1 to that frequency
            Display * on screen
        continue
    Stop
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = -iNo; iCnt <= 0; iCnt++)     //  N
    {
        printf("%d\t",iCnt);
        //printf("*\t");
    }
    
    iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)      // N
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Frequency : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}

// Time Complexity O(2N)
// N is a Natural Number
// Whhere N > = 0 and N <= Infinity