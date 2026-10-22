#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CheckDivisibility
// Descripton : Check Greater number
// Input : Integer
// Output : String
// Author : Avanti Vijay Dalvi
// Date : 21/10/2026
/////////////////////////////////////////////////////////////////////

void CheckDivisibility(int iNo)
{
    if((iNo % 5) == 0)
    {
        printf("Divisible by 5 \n");
    }
    else 
    {
        printf("Not Divisible by 5\n");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number : \n");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}