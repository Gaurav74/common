#include <stdio.h>
#define func(x) x*x+x
int main(int argc, char const *argv[]) {
  int x;
  x=36+func(5)*func(3);
  printf("%d\n",x );
  return 0;
}
