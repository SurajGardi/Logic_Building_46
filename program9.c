//UPDATED CODE  // Selection

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

#define ERR_INVALID_AGE -1

int CalculateTickit(int iAge )
{
    int iPrice = 0;
    if(iAge < 0)
    {
        return ERR_INVALID_AGE;
    }
    else  if((iAge >= 0) && (iAge <= 5))
    {
        iPrice = 0;
    }
    else  if((iAge > 5) && (iAge <= 18))
    {
        iPrice = 700;
    }
    else  if((iAge > 18) && (iAge <= 50))
    {
        iPrice = 999;
    }
    else  if(iAge > 50)
    {
        iPrice = 500;
    }
    return iPrice;

}

int main()
{
    int iValue = 0; int iRet = 0;
    printf("Welcome to Ammusement Park : \n");
    printf("Enter Your Age : ");
    scanf("%d",&iValue);

    iRet = CalculateTickit(iValue);

    

    if(iRet == ERR_INVALID_AGE)
    {
        printf("unable to process as input is invalid  \n");
    }
    else
    {
        printf("Your Tickit price is : %d",iRet);
    }

    return 0;
}