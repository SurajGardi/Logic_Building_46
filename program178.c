// input : IndiA
// output : I$d$A

#include<stdio.h>       

void Change(char *str)    
{

    while(*str != '\0')
    {

        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = '$';
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

    Change(Arr);

    printf("Updated String : %s\n",Arr);

    return 0;
}

