#include <stdio.h>
int main(int argc, char const *argv[]) {
 int i=6;
 printf("%d %d %d %d\n",i,i++,(i+++i+++i+++i+++i++),i);
printf("%d",i++*i);


  return 0;
}
