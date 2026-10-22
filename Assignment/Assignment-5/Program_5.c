#include <stdio.h>
/////////////////////////////////////////////////////////////////////
// Function Name :- checkcharacter
// Descripton : accepts one character and checks its type.
// Input : char
// Output : String
// Author : Avanti Vijay Dalvi
// Date : 21/10/2026
/////////////////////////////////////////////////////////////////////
void checkCharacter(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase alphabet");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase alphabet");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special character");
    }
}

int main()
{
    char ch;

    printf("Enter a single character: ");
    scanf("%c", &ch);

    checkCharacter(ch);

    return 0;
}