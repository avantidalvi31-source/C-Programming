
#include <stdio.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CalculateDiscount
// Descripton : chcek discount
// Input : int
// Output : int
// Author : Avanti Vijay Dalvi
// Date : 21/10/2026
/////////////////////////////////////////////////////////////////////

void calculateDiscount(float amount)
{
    float discount, finalAmount;

    if (amount < 0)
    {
        printf("Invalid purchase amount");
    }
    else if (amount < 1000)
    {
        discount = 0;
        finalAmount = amount - discount;
        printf("Final payable amount = %.2f", finalAmount);
    }
    else if (amount < 5000)
    {
        discount = amount * 0.10;
        finalAmount = amount - discount;
        printf("Discount = %.2f\n", discount);
        printf("Final payable amount = %.2f", finalAmount);
    }
    else
    {
        discount = amount * 0.20;
        finalAmount = amount - discount;
        printf("Discount = %.2f\n", discount);
        printf("Final payable amount = %.2f", finalAmount);
    }
}

int main()
{
    float amount;

    printf("Enter total purchase amount: ");
    scanf("%f", &amount);

    calculateDiscount(amount);

    return 0;
}
