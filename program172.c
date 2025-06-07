#include<stdio.h>       

void CountCapitalSmall(char *str)    
{
    int iSmallCount = 0, iCapCount = 0;


    while(*str != '\0')
    {

        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapCount++;
        }
        else
        {
            iSmallCount++;
        }
        str++;
    }
    printf("Number of capital Characters are : %d\n",iCapCount);
    printf("Number of capital Characters are : %d\n",iSmallCount);
}

int main()
{
    char Arr[50] = {'\0'};  //it may avoid garbage value

    printf("Enter String : ");
    scanf("%[^'\n]s",&Arr);         // ^ indicates -ve in REGEX

    CountCapitalSmall(Arr);

    return 0;
}

