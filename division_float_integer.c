#include<stdio.h>
 int main(int argc, char const *argv[]) {

printf("%d\n",5/2 );
//the %d will give error if floating point data type is used viceverca for %f incase of integer
printf("%d\n",(int)(5.0/2) );
printf("%f\n",(5/2.0) );
printf("%f\n",(5.0/2.0) );


  return 0;
}
