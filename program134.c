#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    if((Arr == NULL) || (iSize <= 0))       //  filter
    {
        return false;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0, iValue = 0, iCnt = 0;
    bool bRet = false;

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

    bRet = Search(iPtr, iLength, iValue);

    if(bRet == true)
    {
        printf("%d is present in Array",iValue);
    }
    else
    {
        printf("%d is not present in Array",iValue);
    }

    free(iPtr);

    return 0;
}