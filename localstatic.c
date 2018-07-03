#include<stdio.h>
static int a=3;

//a=9;

void stat(int n){

  if(n>0){
  static int b=4;
  printf("b : %d\n", b++);
  printf("a : %d\n", a);
  //printf("c : %d\n", c);
  stat(n-1);
static int a=88;
}else{
   a=96;
}

}

void main(){
  //static int c=1;
printf("%d\n",a);
a=8;
printf("%d\n",a);
static int a=9;
printf("%d\n",a );
stat(5);
//static int a=66;
printf("%d\n",a );
{
  static int t=0;
}
stat(5);

printf("t : %d\n",a);
}
