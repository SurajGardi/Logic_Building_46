#include<stdio.h>

void Display(char str[])    // Array is internally treated as pointer
{
    printf("%c\n",str[0]);  // *(str + 0)

    printf("%c\n",str[1]);  // *(str + 1)

    printf("%c\n",str[2]);

    printf("%c\n",str[3]);

}

int main()
{
    char Arr[50] = {'\0'};  //it may avoid garbage value

    printf("Enter String : ");
    scanf("%[^'\n]s",&Arr);         // ^ indicates -ve in REGEX

    Display(Arr);

    return 0;
}

//if u enter data < 4 then you will get segmentation fault

// Here str is stable and accssing the data by providing index