#include <stdio.h>
int main(int argc, char const *argv[]) {
struct first {
  int id;
  int pass;
} a={1,2};

struct second {

  int pin;
  struct first p;
} *point;

point->pin=4;
point->p=a;
printf("%d",a.id);



  return 0;
}
