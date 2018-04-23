#include <stdio.h>
void arrayCheck(int arr[]);
void passvalue(int );
int main(int argc, char const *argv[]) {
int array[]={1,2,3,4,5};
for(int i=0;i<5;i++){
//putchar(array[i]);
printf("%d\n",array[i]);
}
arrayCheck(array);
for(int i=0;i<5;i++){
//putchar(array[i]);
printf("%d\n",array[i]);
}
int a=9;
printf("%d\n",a );
passvalue(a);
printf("%d\n",a );

  return 0;
}

void arrayCheck(int arr[]){
int i=0;
  for(i=0;i<5;i++)
  arr[i]=0;
}
void passvalue(int a){
  a=8;
}
