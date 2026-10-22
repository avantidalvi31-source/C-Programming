#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- FindGreater
// Descripton : Check Greater number
// Input : Integer
// Output : String
// Author : Avanti Vijay Dalvi
// Date : 21/10/2026
/////////////////////////////////////////////////////////////////////

void FindGreater(int iFirst,int isecond)
{
    if(iFirst > isecond)
    {
        printf("%d is greater \n",iFirst);
    }
    else 
    {
        printf("%d is greater \n",isecond);
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter a number : \n");
    scanf("%d",&iValue1);

    printf("Enter a number : \n");
    scanf("%d",&iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}