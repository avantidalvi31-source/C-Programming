#include <stdio.h>
/////////////////////////////////////////////////////////////////////
// Function Name :-RectangleArea
// Descripton : Calculate Area of Rectangle
// Input : int
// Output : int
// Author : Avanti Vijay Dalvi
// Date : 01/11/2026
/////////////////////////////////////////////////////////////////////

int RectangleArea(float fWidth, float fHeight)
{
    float fArea = 0.0;

    fArea = fWidth * fHeight;

    return fArea;
}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    int iRet = 0;

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter height: ");
    scanf("%f", &fValue2);

    iRet = RectangleArea(fValue1, fValue2);

    printf("Area of rectangle is: %d\n", iRet);

    return 0;
}