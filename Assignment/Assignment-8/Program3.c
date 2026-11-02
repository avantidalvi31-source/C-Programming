#include <stdio.h>

/////////////////////////////////////////////////////////////////////
// Function Name :- Display
// Description : Display number in words
// Input : Integer
// Output : Number in words
// Author : Avanti Vijay Dalvi
// Date : 01/11/2026
/////////////////////////////////////////////////////////////////////
int factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = factorial(iValue);

    printf("Factorial is: %d\n", iRet);

    return 0;
}