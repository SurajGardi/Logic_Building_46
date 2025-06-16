#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>       // Required for LINUX OS

int main()
{
    int fd = 0;

    fd = creat("Demo.txt",0777);

    return 0;
} 