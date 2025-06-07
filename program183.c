#include<stdio.h>

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';

    printf("Enetr String : ");
    scanf("%[^'\n']s",Arr);
    
    // Problem due to Buffer cleanup
    printf("Enter the Character : ");
    scanf("%c",&cValue);        
    return 0;
}