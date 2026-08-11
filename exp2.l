%{
#include <stdio.h>
%}

%%
[0-9]      { printf("It is a Digit\n"); }
.          { printf("It is Not a Digit\n"); }
%%

int yywrap()
{
    return 1;
}

int main()
{
    printf("Enter a Character: ");
    yylex();
    return 0;
}