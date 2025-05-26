// Max works only for Positive elements

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0;

    if((Arr == NULL) || (iSize <= 0))       //  filter
    {
        printf("Invalid Input\n");
        return -1;
    }    

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;    
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;
    

    printf("Enter Number of Elements : \n");
    scanf("%D",&iLength);

    iPtr = (int*) malloc(iLength* sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter the Elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("\nEnter the Number %d :",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Maximum(iPtr, iLength);

    printf("Maximum element is : %d ",iRet);
    
    free(iPtr);

    return 0;
}