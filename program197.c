#include<stdio.h>

void ReverseDisplay(char *str)          // Display Rev Str by using while loop
{
    int iCount = 0, iCnt = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    str--;

    iCnt = iCount;

    while(iCnt > 0)
    {
        printf("%c",*str);
        iCnt--;
        str--;
    }
    printf("\n");

}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    ReverseDisplay(Arr);

    return 0;
}
    

