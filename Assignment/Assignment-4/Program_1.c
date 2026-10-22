#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CheckNumber
// Descripton : Print Type of Number
// Input : Integer
// Output : String
// Author : Avanti Vijay Dalvi
// Date : 21/10/2026
/////////////////////////////////////////////////////////////////////

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("Positive Number.\n");
    }
    else if(iValue < 0)
    {
        printf("Negative Number.\n");
    }
    else 
    {
        printf("Zero.\n");
    }
}
int main()
{
    int iNo = 0;
    printf("Enter a number : \n");
    scanf("%d",&iNo);

    CheckNumber(iNo);

    return EXIT_SUCCESS;
}