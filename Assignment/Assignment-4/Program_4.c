#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- CheckVotingEligibility
// Descripton : Check Greater number
// Input : Integer
// Output : String
// Author : Avanti Vijay Dalvi
// Date : 21/10/2026
/////////////////////////////////////////////////////////////////////

void CheckVotingEligibility(int iAge)
{
    if(iAge >= 18)
    {
        printf("Eligible for Voting \n");
    }
    else if(iAge < 0)
    {
        printf("Invalid Input \n");
    }
    else 
    {
        printf("Not Eligible For Voting \n");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number : \n");
    scanf("%d",&iValue);

    CheckVotingEligibility(iValue);

    return EXIT_SUCCESS;
}