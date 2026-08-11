#include <stdio.h>
#include <string.h>
#include <ctype.h>

char input[100];
int pos = 0;

/* Function declarations */
void E();
void Eprime();
void T();
void Tprime();
void F();

/* E -> T E' */
void E()
{
    T();
    Eprime();
}

/* E' -> + T E' | epsilon */
void Eprime()
{
    if (input[pos] == '+')
    {
        pos++;
        T();
        Eprime();
    }
}

/* T -> F T' */
void T()
{
    F();
    Tprime();
}

/* T' -> * F T' | epsilon */
void Tprime()
{
    if (input[pos] == '*')
    {
        pos++;
        F();
        Tprime();
    }
}

/* F -> (E) | id */
void F()
{
    if (input[pos] == '(')
    {
        pos++;
        E();

        if (input[pos] == ')')
        {
            pos++;
        }
        else
        {
            printf("Error: Missing ')'\n");
        }
    }
    else if (input[pos] == 'i' && input[pos + 1] == 'd')
    {
        pos += 2;
    }
    else
    {
        printf("Error: Invalid symbol at position %d\n", pos);
        pos++;
    }
}

int main()
{
    printf("Recursive Descent Parser\n");
    printf("-------------------------\n");

    printf("Enter expression: ");
    scanf("%s", input);

    /* Add end marker */
    strcat(input, "$");

    pos = 0;

    E();

    if (input[pos] == '$')
    {
        printf("\nString Accepted!\n");
    }
    else
    {
        printf("\nString Rejected!\n");
    }

    return 0;
}