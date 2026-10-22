#include <stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CheckMultipleDivisibility
// Descripton : Number is Divisible by 3 or 5 or both
// Input : Integer
// Output : String
// Author : Avanti Vijay Dalvi
// Date : 21/10/2026
/////////////////////////////////////////////////////////////////////

void CheckMultipleDivisibility(int inum)
{
    if (inum % 3 == 0 && inum % 5 == 0)
    {
        printf("Divisible by both 3 and 5");
    }
    else if (inum % 3 == 0)
    {
        printf("Divisible only by 3");
    }
    else if (inum % 5 == 0)
    {
        printf("Divisible only by 5");
    }
    else
    {
        printf("Not divisible by 3 or 5");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter an integer: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);
    

    return EXIT_SUCCESS;
}
