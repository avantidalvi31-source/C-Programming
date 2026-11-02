/*
Step 1 : Understand the Problem Statement
Step 2 : Write the Algorithm
Step 3 : Decide the Programming Language
Step 4 : Write the program
Step 5 : Test the Program
*/
///////////////////////////////////////////////////////////////////////////////////
// 
// Step 1:  Understand the Problem Statement
//          User is going to to enter two integers and we have to perform addition
//
///////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
// Step 2 :Write the Algorithm
/*
    Start
        Accept first number as No1
        Accept first number as No2
        Create the Variable as Ans to store the result
        Perform the Addition and store into Ans
        Display the Result from Ans
    Stop
*/
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//
// Step 3 : Decide the Programming Language
//          We Select C programming
//
/////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//
// Step 4 : Write a Program
//
////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////
//
// Your Buisness Logic Should be Reusable
//
///////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////
//
//  Function name : Addition
//  Input         : Integer , Integer
//  Output        : Integer
//  Description   : Perform Addition
//  Date          : 04/10/2026
//  Author        : Avanti Vijay Dalvi
//
////////////////////////////////////////////////////////////////
int Addition(int iNo1 , int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;   //Buisness Logic

    return iAns;
}

////////////////////////////////////////////////////////////////
//
//  Entry Point of the Application
//
////////////////////////////////////////////////////////////////


int main()
{
    int iValue1 = 0, iValue2 = 0 , iResult = 0;

    printf("Enter First number: \n");
    scanf("%d",&iValue1);

    printf("Enter Second number: \n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1 , iValue2);                    
    
    printf("Addition is: %d\n",iResult);

    return 0;
}