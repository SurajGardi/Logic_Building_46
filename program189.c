#include<stdio.h>       // case Insensitive

// Input : deRm2dfr
// char : R

// output : 2 (Correct)

// Input : Demo@23@re
// char : @

// output : 2 (Correct)

int CharFrequency(char *str, char ch
)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((ch >= 'A') && (ch <= 'Z'))                  //Capital
        {      
            if((*str == ch) || (*str == ch + 32))  
            {
                iCount++; 
            }                             
        }
        else if((ch >= 'a') && (ch <= 'z'))             // Small
        {            
            if((*str == ch) || (*str == ch - 32))  
            {
                iCount++; 
            }            
        }
        else                  // Other (Special symbols / Digits)
        {
            if(*str == ch)
            {
                iCount++;
            }
        }
        str++;
    }

    // while(*str != '\0')
    // {
    //     if(((ch >= 'A') && (ch <= 'Z')) && ((*str == ch) || (*str == ch + 32)))
    //     {           
    //             iCount++;           
    //     }
    //     else if(((ch >= 'a') && (ch <= 'z')) && ((*str == ch) || (*str == ch - 32)))
    //     {            
    //             iCount++;            
    //     }
    //     str++;
    // }
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