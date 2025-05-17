//////////////////////////////////////////////////////
//
//  File name : program4.c
//  Description : Use to calculate Percentage by user input
//  Author : Suraj Vikas Gardi
//  Date : 28/04/2025
//
//////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int Total = 0;
    int Obtained = 0;
    float Percentage = 0.0f;

    printf("Enter Total Marks : ");
    scanf("%d",&Total);

    printf("Enter Obtained Marks : ");
    scanf("%d",&Obtained);

    Percentage = ((float)Obtained / (float)Total) * 100;

    printf("Percentage is : %.2f%%\n",Percentage);
 
    return 0;
}