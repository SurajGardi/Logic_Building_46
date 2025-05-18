//Input : 4 #
// Output : #   #   #   #

//Input : 5 &
// Output : &   &   &   &

//Input : 3 z
// Output : z   z   z   z

/*
    Start
        Accept the frequency
        Iterete from 1 to that frequency
            Display * on screen
        continue
    Stop
*/

#include<stdio.h>

void Display(int iNo, char ch)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)     //  2N
    {
        printf("%c\t",ch);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    char cValue = '\0';

    printf("Enter Frequency : \n");
    scanf("%d",&iValue);


    printf("Enter Character : \n");
    scanf(" %c",&cValue);

    Display(iValue,cValue);
    return 0;
}

// Time Complexity O(N)
// N is a Natural Number
// Whhere N > = 0 and N <= Infinity