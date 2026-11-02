#include <stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- Display
// Descripton : Print the Display
// Input : int
// Output : Display numbers
// Author : Avanti Vijay Dalvi
// Date : 01/11/2026
/////////////////////////////////////////////////////////////////////
void Display(int ino)
{
    int i = 0;
    
    if(ino < 0)
    {
        ino = -ino;
    }

    for(i = 1; i <= ino; i++)
    {
        printf("%d\t",i);
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
