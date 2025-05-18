//Iteration
#include<stdio.h>

void Display()
{
    int j = 0;

    for(int i = 1; i <= 3;i++)
    {
        for(int j = 1; j <= 3; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    Display();

    return 0;
}

