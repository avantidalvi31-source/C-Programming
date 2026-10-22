#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input         : Integer 
//  Output        : Integer
//  Description   : Display *
//  Date          : 21/10/2026
//  Author        : Avanti Vijay Dalvi
//
////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    while(iNo >)
    {
        printf("*\n");
        iNo--;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}