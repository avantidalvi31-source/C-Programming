#include<stdio.h>
///////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input         : Integer
//  Output        : Integer
//  Description   : Display number from 5 to 1
//  Date          : 21/10/2026
//  Author        : Avanti Vijay Dalvi
//
////////////////////////////////////////////////////////////////
void Display()
{
    int i = 0;
    i = 5;
    while(i >= 1)
    {
        printf("%d\n",i);
        i--;
    }
}
int main()
{
    Display();

    return 0;
}