#include<stdio.h>           // Palindrome String  by using with Flag
#include<stdbool.h>


bool CheckPalindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;
    bool bFlag = true;

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        if(*start != *end)
        {
            bFlag = false;
            break;
        }
        start++;
        end--;
    }
    return bFlag;
}

int main()
{
    char Arr[50] = {'\0'};
    bool bRet = false;

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);

    bRet = CheckPalindrome(Arr);

    if(bRet == true)
    {
        printf("String is Palindrome");
    }
    else
    {
        printf("String is not Palindrome");
    }

    return 0;
}
    

// Time Complexity O(N+N/2)

