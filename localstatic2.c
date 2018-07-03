#include<stdio.h>
static int a=9;
void main(){
static int a=1;
printf("%d\n",a );
{
static int a=2;
  printf("2 : %d\n",a );
  {
    static int a=3;
    printf("3 : %d\n",a );
    {
      static int a;
      printf("4 : %d\n",a );
    }
    printf("3 : %d\n",a );
a=4;
printf("3 : %d\n",a );
  }
  printf("2 : %d\n",a );
  a=6;
  printf("2 : %d\n",a );
}
printf("1 : %d",a);



}
