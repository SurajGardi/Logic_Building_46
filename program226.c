#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>       // Required for LINUX OS

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the name of File : ");
    scanf("%s",Fname);

    fd = creat(Fname,0777);

    return 0;
}