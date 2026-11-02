
#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////
// Function Name :- Display
// Description : Print multiplication 
// Input : Integer
// Output : Multiplication table
// Author : Avanti Vijay Dalvi
// Date : 01/11/2026
/////////////////////////////////////////////////////////////////////

void Display(int ino)
{
    int i = 0;

    for(i = 1; i <= 10; i++)
    {
        printf("%d\n", ino * i);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
