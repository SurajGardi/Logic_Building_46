// Max Min with Complexity O(2N)

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void MaximumMinimum(int Arr[], int iSize)
{
    int iCnt = 0, iMax = 0, iMin = 0;

    if((Arr == NULL) || (iSize <= 0))       //  filter
    {
        printf("Invalid Input\n");
        return;
    }    

    iMin = Arr[0];
    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    printf("Maximum Element is : %d\n",iMax); 
    printf("Minimum Element is : %d\n",iMin);       
}

int main()
{
    int *iPtr = NULL;
    int iLength = 0, iCnt = 0;
    

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

    MaximumMinimum(iPtr, iLength);
    
    free(iPtr);

    return 0;
}

//  O(N)
// Time complexity is always gets calculated of function which contains Business Logic