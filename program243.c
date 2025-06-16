#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>       // Required for LINUX OS
#include<unistd.h>
#include<string.h>

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0;
    char Buffer[1024] = {'\0'};

    printf("Enter the file name that you want to open : ");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);        // change
    if(fd == -1)
    {
        printf("Unable to open the file");
    }
    else
    {
        printf("file succesfully opened with fd : %d\n",fd);

       while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
       {
            //printf("%s",Buffer);
            write(1,Buffer,iRet);
            memset(Buffer,'\0',sizeof(Buffer));     // for removing Garbage
       }

        close(fd);
    }
    
    return 0;
}