#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CheckLeapYear
// Descripton : Check Greater number
// Input : Integer
// Output : String
// Author : Avanti Vijay Dalvi
// Date : 21/10/2026
/////////////////////////////////////////////////////////////////////

void CheckLeapYear(int iYear)
{
    if((iYear % 400) == 0)
    {
        printf("%d is Leap Year \n",iYear);
    }
    else 
    {
        printf("%d Not a Leap Year \n",iYear);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a Year : \n");
    scanf("%d",&iValue);

    CheckLeapYear(iValue);

    return EXIT_SUCCESS;
}