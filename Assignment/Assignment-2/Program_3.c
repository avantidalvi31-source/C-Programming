#include<stdio.h>
///////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input         : Integer 
//  Output        : String
//  Description   : Condition based Display
//  Date          : 21/10/2026
//  Author        : Avanti Vijay Dalvi
//
////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
