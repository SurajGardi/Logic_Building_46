//Iteration by user Input

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(int i = 1; i <= iRow;i++)
    {
        for(int j = 1; j <= iCol; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of Columns : ");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}

