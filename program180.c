// input : SuRaJ@123
// output : suraj@123

#include<stdio.h>       // InBuilt functions for case change are strupr,strlwr

void StrlwrX(char *str)    
{

    while(*str != '\0')
    {

        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + ('a' - 'A');
        }    
        str++;
    }    
}

int main()
{
    char Arr[50] = {'\0'};  //it may avoid garbage value
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n]s",&Arr);         // ^ indicates -ve in REGEX

    StrlwrX(Arr);

    printf("Upper to Lower String : %s\n",Arr);

    return 0;
}

