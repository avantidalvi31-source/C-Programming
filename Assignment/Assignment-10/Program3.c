#include <stdio.h>
/////////////////////////////////////////////////////////////////////
// Function Name :-KMToMeter
// Descripton : Convert kilometer into meter
// Input : int
// Output : int
// Author : Avanti Vijay Dalvi
// Date : 01/11/2026
/////////////////////////////////////////////////////////////////////

int KMToMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance in Kilometer: ");
    scanf("%d", &iValue);

    iRet = KMToMeter(iValue);

    printf("Distance in Meter is: %d\n", iRet);

    return 0;
}