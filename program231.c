#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>       // Required for LINUX OS
#include<unistd.h>      

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0;
    char Buffer[] = "India is My Country";

    printf("Enter the file name that you want to open : ");
    scanf("%s",Fname);

    fd = open(Fname, O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open the file");
    }
    else
    {
        printf("file succesfully opened with fd : %d\n",fd);

        iRet = write(fd,Buffer,11);

        printf("%d bytes gets written succesfully\n",iRet);

        close(fd);
    }
    
    return 0;
}