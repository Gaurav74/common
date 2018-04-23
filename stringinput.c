#include<stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  char *arr[5],*name="gaurav",array[20]="haura",*sarr;
  for(int i=0;i<5;i++)
  arr[i]=malloc(sizeof(char)*10);
  for(int i=0;i<5;i++){
  scanf("%10s",arr[i]);
   }
  for(int i=0;i<5;i++)
  printf("%s",arr[i]);
  return 0;
}
