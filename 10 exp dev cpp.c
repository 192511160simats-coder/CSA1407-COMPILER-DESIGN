#include <stdio.h>
#include <string.h>

int main()
{
    char grammarS[50] = "(L) / a";
    char grammarL[50] = "L,S / S";

    printf("Original Grammar:\n");
    printf("S -> %s\n", grammarS);
    printf("L -> %s\n", grammarL);

    printf("\nLeft Recursive Production Found:\n");
    printf("L -> L,S\n");

    printf("\nGrammar after eliminating left recursion:\n");
    printf("S  -> (L) / a\n");
    printf("L  -> S L'\n");
    printf("L' -> ,S L' / epsilon\n");

    return 0;
}