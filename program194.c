#include<stdio.h>       
#include<stdbool.h>             // Without Flag by checking ch

bool CheckCharacter(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
           break;
        }
        str++;
    }
    if(*str == ch)
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
    char Arr[50] = {'\0'};
    char cValue = '\0';
    bool bRet = false;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);
    
    // Problem due to Buffer cleanup Solved
    printf("Enter the Character : \n");
    scanf(" %c",&cValue);       // space before %c 

    bRet = CheckCharacter(Arr,cValue);

    if(bRet == true)
    {
        printf("%c is present in %s\n",cValue,Arr);
    }
    else
    {
        printf("%c is NOT present in %s\n",cValue,Arr);
    }

    return 0;
}
