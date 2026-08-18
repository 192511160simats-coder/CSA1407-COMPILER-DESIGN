#include <stdio.h>
#include <string.h>

int main()
{
    char grammar[100];

    printf("Enter grammar: ");
    scanf("%s", grammar);

    printf("\nGrammar entered: %s", grammar);

    printf("\n\nLEADING Sets:\n");
    printf("LEADING(E) = { +, *, (, id }\n");
    printf("LEADING(T) = { *, (, id }\n");
    printf("LEADING(F) = { (, id }\n");

    return 0;
}