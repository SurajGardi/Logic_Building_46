#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLength = 0, iCnt = 0;
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

    printf("Entered Elements are : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d \n",ptr[iCnt]);
    }
    // Step 2 : USE that memory


    
    // Step 3 : Free the memory
    free(ptr);

    return 0;
}

