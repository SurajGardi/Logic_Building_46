#include<stdio.h>

void Display(int ptr[], int iSize)
{
    printf("Elements of the Array are : \n");

    printf("%d \n",ptr[0]);     //array and pointer corealation //array and ptr are same
                                // Array is treated as pointer and ptr is like arr
    printf("%d \n",ptr[1]);

    printf("%d \n",ptr[2]);

    printf("%d \n",ptr[3]);

    printf("%d \n",ptr[4]);

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

