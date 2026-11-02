#include <stdio.h>
/////////////////////////////////////////////////////////////////////
// Function Name : SquareFeetToMeter
// Descripton : Convert Square feet to meter
// Input : int
// Output : int
// Author : Avanti Vijay Dalvi
// Date : 01/11/2026
/////////////////////////////////////////////////////////////////////
float SquareFeetToMeter(float fArea)
{
    float fMeter = 0.0;

    fMeter = fArea * 0.0929;

    return fMeter;
}

int main()
{
    float fValue = 0.0;
    float fRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%f", &fValue);

    fRet = SquareFeetToMeter(fValue);

    printf("Area in square meter is: %f\n", fRet);

    return 0;
}