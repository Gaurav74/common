#include "stdio.h"
int main(int argc, char const *argv[]) {
  int i=1;
  printf("%d %d %d %d\n",i++,i++,i,i++);
  printf("%d\n",i );
  return 0;
}
