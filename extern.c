#include<stdio.h>
void print(void);
extern int a;
extern int b;
static int c=9;
void main(){
  // int a=9,b=7;
  extern int a,b,c;
  printf("%d %d %d\n",a,b,c);
  print();
   a=1,b=2;
    printf("%d %d %d\n",a,b,c);
      extern int a,b,c;
        printf("%d %d %d\n",a,b,c);
        print();
}
void print(){
  extern int a,b;
  printf("%d %d\n",a,b);
}
int a=8,b=7;
