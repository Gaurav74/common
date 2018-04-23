#include <stdio.h>
char cases(char);

int main(int argc, char const *argv[]) {
printf("%c\n",cases('d'));
printf("%c\n",cases(7) );
printf("%c\n",cases('D') );


  return 0;
}

char cases(char c){
  char d;
 (c >= 'a' && c <= 'z') ? d=(c-'a'+'A') :((c >='A' && c<='Z') ? d=(c-'A'+'a') : (d = '1'));
return d;
}
