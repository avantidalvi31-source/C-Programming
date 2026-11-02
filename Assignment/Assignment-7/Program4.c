#include <stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- DisplayOdd
// Descripton : Print the odd numbers
// Input : int
// Output : Display Odd number  in given range
// numbers
// Author : Avanti Vijay Dalvi
// Date : 01/11/2026
/////////////////////////////////////////////////////////////////////
void DisplayOdd(int ino)
{
    int i = 0;

    for(i = 1; i <= ino; i++)
    {
        if((i % 2) != 0)
        {
            printf("%d\t",i);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayOdd
(iValue);

    return EXIT_SUCCESS;
}
