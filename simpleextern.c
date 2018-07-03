#include <stdio.h>
extern int a,b;
int a=1,b=2; //extern must be initialised before using in programs
int main(int argc, char const *argv[]) {
a=9,b=4;
extern int a,b;
printf("%d %d\n",a,b );





  return 0;
}
