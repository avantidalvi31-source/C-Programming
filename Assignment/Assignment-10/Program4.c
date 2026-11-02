#include <stdio.h>
/////////////////////////////////////////////////////////////////////
// Function Name :-FhtoCs
// Descripton : Convert Ferhenit to celsius
// Input : int
// Output : int
// Author : Avanti Vijay Dalvi
// Date : 01/11/2026
/////////////////////////////////////////////////////////////////////


float FhtoCs(float fTemp)
{
    float fCelsius = 0.0;

    fCelsius = (fTemp - 32) * 5 / 9;

    return fCelsius;
}

int main()
{
    float fValue = 0.0;
    float fRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    fRet = FhtoCs(fValue);

    printf("Temperature in Celsius is: %f\n", fRet);

    return 0;
}