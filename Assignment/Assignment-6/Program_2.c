#include <stdio.h>

int main()
{
    int age, marks;

    printf("Enter student's age: ");
    scanf("%d", &age);

    printf("Enter student's marks: ");
    scanf("%d", &marks);

    if (age < 0 || marks < 0 || marks > 100)
    {
        printf("Invalid input");
    }
    else if (age >= 17 && marks >= 60)
    {
        printf("Student is eligible for admission");
    }
    else
    {
        printf("Student is not eligible for admission");
    }

    return 0;
}