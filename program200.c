#include<stdio.h>

void strrevX(char *str)         // Display Rev Str by using 2 pointers and temp variable
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')  // Move 'end' to the last character
    {
        end++;
    }
    end--;

    while(start <= end)     // 2nd Approach
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);

    strrevX(Arr);

    printf("String After Reverse : %s\n", Arr);

    return 0;
}
    

// Time Complexity O(N+N/2)

