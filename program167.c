#include<stdio.h>       // By InBuild Function
#include<string.h>      // counting string Characters by inBuild Function strlen

int main()
{
    char Arr[50] = {'\0'};  //it may avoid garbage value
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n]s",&Arr);         // ^ indicates -ve in REGEX

    iRet = strlen(Arr);

    printf("Number of Characters are : %d",iRet);

    return 0;
}

