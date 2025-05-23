#include<stdio.h>

int Summetion(int ptr[], int iSize)
{
    int iCnt = 0, iSum = 0;


    for(iCnt = 0; iCnt < iSize; iCnt++)                  // O(N)
    {
        iSum = iSum + ptr[iCnt];
    }
    return iSum;
}

int main()
{
    int Arr[5];
    int iCnt = 0, iRet = 0;;
    
    printf("Enter the Elements : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)                  // O(N)
    {
        scanf("%d",&Arr[iCnt]);
    }
  
    iRet = Summetion(Arr,5);      //  Display(100,5)  //here we are passing Arr as address and 5 as value

    printf("Addition is : %d",iRet);
    return 0;
}

