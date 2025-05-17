/*
    start
        Accept age from user
            if age is less than 5 then there will be nno tickit
            if it is in between 5 to 18 then it will be 700
            if it is in between 18 to 50 then it will be 999
            if it is greater than 50 then it will be 500


    stop

*/

#include<stdio.h>

void CalculateTickit(int iAge )
{
    if(iAge < 0)
    {
        printf("unable to process as input is invalid  \n");
        return;
    }
    else  if((iAge >= 0) && (iAge <= 5))
    {
        printf("free \n");
    }
    else  if((iAge > 5) && (iAge <= 18))
    {
        printf(" Tickit Price 700 \n");
    }
    else  if((iAge > 18) && (iAge <= 50))
    {
        printf(" Tickit Price 999 \n");
    }
    else  if(iAge > 50)
    {
        printf(" Tickit Price 500 \n");
    }

}

int main()
{
    int iValue = 0;
    printf("Welcome to Ammusement Park : ");
    printf("Enter Your Age : ");
    scanf("%d",&iValue);

    CalculateTickit(iValue);

    return 0;
}