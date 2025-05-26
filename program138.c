#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;

    if((Arr == NULL) || (iSize <= 0))       //  filter
    {
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
    
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0, iValue = 0, iCnt = 0, iRet = 0;
    

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

    printf("\nEnter the value that you want to search : \n");
    scanf("%d",&iValue);

    iRet = Frequency(iPtr, iLength, iValue);

    printf("%d is appears %d times in the Array",iValue,iRet);
    
    free(iPtr);

    return 0;
}