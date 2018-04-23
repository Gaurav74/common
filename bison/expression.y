%{
#include<stdio.h>
#include<math.h>
#define YYSTYPE double
int yylex (void);
void yyerror (char const *);
%}

%token NUM
%left '-' '+'
%left '*' '/'
%right '^'
%%
input: /*empty here */
       | input line 
;

line: '\n'
      |exp '\n'  {printf("\t%.10g\n",$1);}
      |error '\n' { yyerrok;}
;

exp:  
      NUM           {$$=$1;}
     |exp '+' exp  {$$=$1+$3;}
     |exp '-' exp  {$$=$1-$3;}
     |exp '*' exp  {$$=$1*$3;}
     |exp '/' exp  {$$=$1/$3;}
   
;


%%

#include <ctype.h>
int yylex ()
{
  int c;

  /* skip white space  */
  while ((c = getchar ()) == ' ' || c == '\t')  
    ;
  /* process numbers   */
  if (c == '.' || isdigit (c))                
    {
      ungetc (c, stdin);
      scanf ("%lf", &yylval);
      return NUM;
    }
  /* return end-of-file  */
  if (c == EOF)                            
    return 0;
  /* return single chars */
  return c;                                
}

int main ()
{
  
return yyparse (); 
}

#include <stdio.h>
void yyerror (char const *s)  /* Called by yyparse on error */
{
  fprintf(stderr,"%s\n", s);
}







