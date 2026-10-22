#include<stdio.h>
///////////////////////////////////////////////////////////////
//
//  Function name : Check
//  Input         : Integer
//  Output        : Integer
//  Description   : Division by 5
//  Date          : 21/10/2026
//  Author        : Avanti Vijay Dalvi
//
////////////////////////////////////////////////////////////////
void Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue = 0;
    iValue = 5;
    Accept(iValue);
    return  0;
}
