#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLength = 0;
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

    // Step 2 : USE that memory

    
    // Step 3 : Free the memory
    free(ptr);

    return 0;
}

