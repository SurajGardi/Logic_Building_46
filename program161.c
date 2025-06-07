#include<stdio.h>

void Display(char str[])    // Array is internally treated as pointer
{
    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

    printf("%c\n",*str);
    str++;

}

int main()
{
    char Arr[50] = {'\0'};  //it may avoid garbage value

    printf("Enter String : ");
    scanf("%[^'\n]s",&Arr);         // ^ indicates -ve in REGEX

    Display(Arr);

    return 0;
}
// Here str is not stable and accssing the data by incrementing itself
