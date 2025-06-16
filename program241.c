#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>       // Required for LINUX OS
#include<unistd.h>
#include<string.h>

int main()
{
    write(1,"Jay Ganesh...",13);        // printf is internally calls write

    return 0;
}