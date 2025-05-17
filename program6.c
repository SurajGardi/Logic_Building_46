// Error in test cases before using next time handle it properly...

/*
    Start
        Accept percentage from user 
            if percentage is less than 0 and greater than 100
                Display invalid Input
            if percentage is greater than 0 and less than 35
                Display as fail 
            if percentage is greater than 35 and less than 50
                Display as Pass Class 
            if percentage is greater than 50 and less than 60
                Display as Second Class 
            if percentage is greater than 60 and less than 70
                Display as First Class 
            if percentage is greater than 70 and less than 100
                Display as Fiest class with Distinction + 
    Stop

*/

#include<stdio.h>

void DispalyClass(float fPerc)
{
    if((fPerc < 0.0f) || (fPerc > 100.0f))
    {
        printf("unable to process as input is invalid \n");
        return;
    }
    else if((fPerc >= 0.0f) && (fPerc < 35.0f))
    {
        printf("You are Fail \n");
    }
    else if((fPerc >= 35.0f) && (fPerc < 50.0f))
    {
        printf("Pass Class \n");
    }
    else if((fPerc >= 50.0f) && (fPerc < 60.0f))
    {
        printf("Second Class \n");
    }
    else if((fPerc >= 60.0f) && (fPerc < 70.0f))
    {
        printf("First Class \n");
    }
    else if((fPerc >= 70.0f) && (fPerc <= 100.0f))
    {
        printf("First Class with Distinction \n");
    }
    
}

int main()
{
    float fValue = 0.0;
    printf("Enter Your Percentage to Display Class : ");
    scanf("%f",&fValue);

    DispalyClass(fValue);

    return 0;
}