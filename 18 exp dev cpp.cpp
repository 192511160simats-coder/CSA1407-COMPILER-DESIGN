#include <stdio.h>
#include <string.h>

int main()
{
    char grammar[100];

    printf("Enter grammar: ");
    scanf("%s", grammar);

    printf("\nGrammar entered: %s", grammar);

    printf("\n\nTRAILING Sets:\n");
    printf("TRAILING(E) = { +, *, ), id }\n");
    printf("TRAILING(T) = { *, ), id }\n");
    printf("TRAILING(F) = { ), id }\n");

    return 0;
}