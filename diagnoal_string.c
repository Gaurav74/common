#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
char arr[100];
scanf("%s",arr);
int len=strlen(arr);

for(int i=0;i<len;i++){
  for(int j=0;j<i;j++){
    printf(" ");
  }
  printf("%c\n",*(arr+i));
}
printf("\t\v" );
printf("hello");



  return 0;
}
