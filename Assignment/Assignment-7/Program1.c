#include <stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- Pattern
// Descripton : Print the pattern
// Input : int
// Output : Pattern
// Author : Avanti Vijay Dalvi
// Date : 01/11/2026
/////////////////////////////////////////////////////////////////////
void Pattern(int ino)
{
    
    if(ino < 0)
    {
        ino = -ino;
    }

    for(i = 1; i <= ino; i++)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter inober: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}
