#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CheckEvenOdd
// Descripton : Print Number check even or odd
// Input : Integer
// Output : String
// Author : Avanti Vijay Dalvi
// Date : 21/10/2026
/////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int iValue)
{
    if((iValue % 2) == 0)
    {
        printf("Even Number.\n");
    }
    else 
    {
        printf("Odd number.\n");
    }
}
int main()
{
    int iNo = 0;
    printf("Enter a number : \n");
    scanf("%d",&iNo);

    CheckEvenOdd(iNo);

    return EXIT_SUCCESS;
}