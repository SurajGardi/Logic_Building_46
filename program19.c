#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter number to check whetherit is even or Odd : ");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("%d is Even Number",iValue);
    }
    else
    {
        printf("%d is Odd number",iValue);
    }

    return 0;
}