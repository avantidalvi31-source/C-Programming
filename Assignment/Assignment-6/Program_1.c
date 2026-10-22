#include <stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CalculateElectricityBill
// Descripton : accepts one character and checks its type.
// Input : char
// Output : String
// Author : Avanti Vijay Dalvi
// Date : 21/10/2026
/////////////////////////////////////////////////////////////////////
void CalculateElectricityBill(int iunits)
{
    float fbill = 0.0f;

    if (fbill < 0)
    {
        printf("Invalid unit consumption");
    }
    else if (fbill <= 100)
    {
        iunits = fbill * 5;
        printf("Bill = %.2f", iunits);
    }
    else if (fbill <= 200)
    {
        iunits = (100 * 5) + (fbill - 100) * 7;
        printf("Bill = %.2f", iunits);
    }
    else
    {
        iunits = (100 * 5) + (100 * 7) + (fbill - 200) * 10;
        printf("Bill = %.2f", iunits);
    }
}

int main()
{
    int iUnits = 0;
    

    printf("Enter electricity fbill consumed: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);
    

    

    return 0;
}
