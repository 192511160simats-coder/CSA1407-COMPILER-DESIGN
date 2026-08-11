%{
#include <stdio.h>
int count = 0;
%}

%%
[aAeEiIoOuU] {
    printf("Vowel found: %s\n", yytext);
    count++;
}

.|\n ;
%%

int yywrap()
{
    return 1;
}

int main()
{
    printf("Enter a string:\n");
    yylex();
    printf("\nTotal number of vowels = %d\n", count);
    return 0;
}