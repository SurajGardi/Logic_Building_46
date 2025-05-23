#include<stdio.h>

int main()
{
    int Arr[5];
    int iCnt = 0;
    
    printf("Enter the Elements : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)                  // O(N)
    {
        scanf("%d",&Arr[iCnt]);
    }
  
    printf("Element from the array are : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)                 // O(N)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;
}

//  Time Complexity = O(2N)
// upto this program are of type call by value