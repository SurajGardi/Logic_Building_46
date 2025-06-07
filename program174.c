#include<stdio.h>       

void CountCapitalSmallDigit(char *str)    
{
    int iSmallCount = 0, iCapCount = 0, iDigitCount = 0;


    while(*str != '\0')
    {

        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapCount++;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCount++;
        }
        else if((*str >= '0') && (*str <= '9'))
        {
            iDigitCount++;
        }
        str++;
    }
    printf("Number of capital Characters are : %d\n",iCapCount);
    printf("Number of small Characters are : %d\n",iSmallCount);
    printf("Number of Digit Characters are : %d\n",iDigitCount);

}

int main()
{
    char Arr[50] = {'\0'};  //it may avoid garbage value

    printf("Enter String : ");
    scanf("%[^'\n]s",&Arr);         // ^ indicates -ve in REGEX

    CountCapitalSmallDigit(Arr);

    return 0;
}

