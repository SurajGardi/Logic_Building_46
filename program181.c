// input : SuRaJ@123
// output : SURAJ@123

#include<stdio.h>       // InBuilt functions for case change are strupr,strlwr

void StruprX(char *str)    
{

    while(*str != '\0')
    {

        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;       // Here it is not pointer Arithmatic Bcoz we are done operations on data if only str is present then it will be pointr arithmatic
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

    StruprX(Arr);

    printf("Lower to Upper String : %s\n",Arr);

    return 0;
}

