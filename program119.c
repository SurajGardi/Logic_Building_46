#include<stdio.h>

void Display(int *ptr, int iSize)
{
    printf("Elements of the Array are : \n");

    printf("%d \n",*ptr);
    ptr++;

    printf("%d \n",*ptr);
    ptr++;

    printf("%d \n",*ptr);
    ptr++;

    printf("%d \n",*ptr);
    ptr++;

    printf("%d \n",*ptr);
    ptr++;

}

int main()
{
    int Arr[5];
    int iCnt = 0;
    
    printf("Enter the Elements : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)                  // O(N)
    {
        scanf("%d",&Arr[iCnt]);
    }
  
    Display(Arr,5);      //  Display(100,5)  //here we are passing Arr as address and 5 as value

    return 0;
}

// from this program are of type call by address