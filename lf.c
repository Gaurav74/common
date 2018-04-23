#include "stdio.h"
int main(int argc, char const *argv[]) {
  int i=0,j=1;
  if(i && ++i){
    printf("%s\n","hello" );
  }
  int k=0,l=0;
  //printf("%d %d\n",(k+k++),k );
printf("%d %d %d\n",k,++k,k++ );
  return 0;
}
