#include<stdio.h>
///////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input         : Integer , integer
//  Output        : Integer
//  Description   :  Accept two number from user & display first number in second number of times.
//  Date          : 21/10/2026
//  Author        : Avanti Vijay Dalvi
//
////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt =0;
    for(iCnt = 1;iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int iValue =0;
    int iCount = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    printf("Enter Frequency : \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}