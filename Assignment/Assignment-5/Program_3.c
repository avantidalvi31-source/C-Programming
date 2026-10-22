#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- DisplayGrade
// Descripton : Displays grade of student based on marks
// Input : Integer
// Output : String
// Author : Avanti Vijay Dalvi
// Date : 21/10/2026
/////////////////////////////////////////////////////////////////////

void DisplayGrade(float fmarks)
{
    if((fmarks > 90) && (fmarks<=100))
    {
        printf("Grade A \n");
    }
    else if((fmarks > 75) && (fmarks<= 89))
    {
        printf("Grade B \n");
    }
        else if((fmarks > 60) && (fmarks<= 74))
    {
        printf("Grade C \n");
    }
        else if((fmarks > 40) && (fmarks<= 54))
    {
        printf("Grade C \n");
    }
        else if(fmarks > 40)
    {
        printf("Fail \n");
    }
    else if ((fmarks > 100) &&(fmarks < 0))
    {
        printf("Invalid marks");
    }
}
int main()
{
    float fMarks = 0.0f;

    printf("Enter a marks : \n");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}