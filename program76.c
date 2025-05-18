//Input : 4
// Output : $   $   $   $

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

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter Frequency : ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}

// Time Complexity O(N)
// N is a Natural Number
// Whhere N > = 0 and N <= Infinity