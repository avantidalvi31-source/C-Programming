#include <stdio.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CalculateBonus
// Descripton : accepts salary and years of service.
// Input : int , float
// Output : int
// Author : Avanti Vijay Dalvi
// Date : 21/10/2026
/////////////////////////////////////////////////////////////////////


void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if (fSalary <= 0 || iYears < 0)
    {
        printf("Invalid input");
    }
    else if (iYears > 10)
    {
        fBonus = fSalary * 0.15;
        printf("Bonus = %.2f", fBonus);
    }
    else if (iYears >= 5)
    {
        fBonus = fSalary * 0.10;
        printf("Bonus = %.2f", fBonus);
    }
    else
    {
        fBonus = fSalary * 0.05;
        printf("Bonus = %.2f", fBonus);
    }
}

int main()
{
    float fSalary;
    int iYears;

    printf("Enter monthly salary: ");
    scanf("%f", &fSalary);

    printf("Enter years of service: ");
    scanf("%d", &iYears);

    CalculateBonus(fSalary, iYears);

    return 0;
}
