// Max works for both Positive & Negative elements

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0;

    if((Arr == NULL) || (iSize <= 0))       //  filter
    {
        printf("Invalid Input\n");
        return -1;
    }    

    iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMin;    
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

    iRet = Minimum(iPtr, iLength);

    printf("Minimum element is : %d ",iRet);
    
    free(iPtr);

    return 0;
}