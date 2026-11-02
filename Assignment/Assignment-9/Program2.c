#include <stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- DollerToINR
// Descripton : accept input in US doller and display its currency value
// Input : int
// Output : int
// Author : Avanti Vijay Dalvi
// Date : 01/11/2026
/////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int iINR = 0;

    iINR = iNo * 70;

    return iINR;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter amount in US Dollar: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Amount in Indian Rupees is: %d\n", iRet);

    return 0;
}