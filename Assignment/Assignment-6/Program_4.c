
#include <stdio.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- checktriangle
// Descripton : Check triangle formed or not
// Input : int
// Output : int
// Author : Avanti Vijay Dalvi
// Date : 21/10/2026
/////////////////////////////////////////////////////////////////////

void checkTriangle(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Invalid sides");
    }
    else if (a + b > c && a + c > b && b + c > a)
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Invalid triangle");
    }
}

int main()
{
    int a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    checkTriangle(a, b, c);

    return 0;
}
