%{
#include<stdio.h>
#include<ctype.h>
#include<math.h>
%}

DIGIT [0-9]




#include <ctype.h>
yylex ()
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
#include <stdio.h>
yyerror (s)  /* Called by yyparse on error */
     char *s;
{
  printf ("%s\n", s);
}

