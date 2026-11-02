#include <stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- Factorial
// Descripton : display factorial of input in even format
// Input : int
// Output : int
// Author : Avanti Vijay Dalvi
// Date : 01/11/2026
/////////////////////////////////////////////////////////////////////

int Evenfactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iFact)
        iFact = iFact * iCnt;
    }
    if(iFact % 2 == 0)
    {
       return iFact;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Evenfactorial(iValue);

    printf("Factorial is: %d\n", iRet);

    return 0;
}