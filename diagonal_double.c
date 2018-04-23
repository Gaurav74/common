#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
char arr[100];
scanf("%s",arr);
int len=strlen(arr);

for(int i=0;i<len/2;i++){
  for(int j=0;j<i;j++){
    printf(" ");
  }
  printf("%c",*(arr+i));
  for(int k=0;k<len-i-2;k++){
    printf(" ");
  }
  printf("%c",*(arr+len-i-1));
  printf("\n" );
}




  return 0;
}
