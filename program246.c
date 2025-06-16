#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>       // Required for LINUX OS
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024        // chk .i file  // once we change macro then all values get changed in all program

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0, iCnt = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

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

       while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
       {
            for(iCnt = 0; iCnt < iRet; iCnt++)
            {
                printf("%c\n",Buffer[iCnt]);
            }

            memset(Buffer,'\0',BUFFER_SIZE);     // for removing Garbage
       }


        close(fd);
    }
    
    return 0;
}