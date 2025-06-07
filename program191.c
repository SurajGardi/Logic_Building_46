#include<stdio.h>       // case Insensitive  // With best Approach******

// Input : deRm2dfr
// char : R

// output : 2 (Correct)

// Input : Demo@23@re
// char : @

// output : 2 (Correct)

int CharFrequency(char *str, char ch)
{
    int iCount = 0;
    int iDisplacement = 0;

    if((ch >= 'A') && (ch <= 'Z'))
    {
        iDisplacement = 32;
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        iDisplacement = -32;
    }
    else
    {
        iDisplacement = 0;
    }

    while(*str != '\0')
    {       
        if((*str == ch) || (*str == ch + iDisplacement))  
        {
            iCount++; 
        }                             
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);
    
    // Problem due to Buffer cleanup Solved
    printf("Enter the Character : \n");
    scanf(" %c",&cValue);       // space before %c 

    iRet = CharFrequency(Arr,cValue);

    printf("%c occurs %d times\n",cValue,iRet);

    return 0;
}

// example : Passport chaking india vs USA