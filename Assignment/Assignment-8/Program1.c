
#include <stdio.h>
#include <stdlib.h>

/////////////////////////////////////////////////////////////////////
// Function Name :- Check
// Description : Display size based on number
// Input : Integer
// Output : Small, Medium or Large
// Author : Avanti Vijay Dalvi
// Date : 01/11/2026
/////////////////////////////////////////////////////////////////////

void Check(int ino)
{
    if(ino < 50)
    {
        printf("Small");
    }
    else if(ino > 50 && ino < 100)
    {
        printf("Medium");
    }
    else if(ino > 100)
    {
        printf("Large");
    }
    else
    {
        printf("Number is 50 or 100");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Check(iValue);

    return EXIT_SUCCESS;
}
