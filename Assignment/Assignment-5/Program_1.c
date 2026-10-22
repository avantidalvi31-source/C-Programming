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

void FindGreater(int iFirst,int isecond,int iThird)
{
    if((iFirst > isecond) && (iFirst > iThird))
    {
        printf("%d is greater \n",iFirst);
    }
    else if((isecond > iFirst) && (isecond > iThird))
    {
        printf("%d is greater \n",isecond);
    }
    else
    {
        printf("%d is greater \n",iThird);
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    printf("Enter a number : \n");
    scanf("%d",&iValue1);

    printf("Enter a number : \n");
    scanf("%d",&iValue2);

    printf("Enter a number : \n");
    scanf("%d",&iValue3);

    FindGreater(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;
}