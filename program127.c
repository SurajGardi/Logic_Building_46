#include<stdio.h>
#include<stdlib.h>

int Summetion(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        //printf("%d \n",Arr[iCnt]);
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter the Number of Elements ");
    scanf("%d",&iLength);

    // Step 1 : Allocaate the memory
    ptr = (int *) malloc(iLength * sizeof(int));
    if(ptr == NULL)
    {
        printf("Unablle to allocate memory\n");
        return -1;
    }

    printf("Enter the Elements : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    // Step 2 : USE that memory

    iRet = Summetion(ptr,iLength);

    printf("Summetion is : %d \n",iRet);
    
    // Step 3 : Free the memory
    free(ptr);

    return 0;
}

