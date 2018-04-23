#include <stdio.h>
int size (long unsigned int);
int main(int argc, char const *argv[]) {
printf("Integer size : %d\n",size(sizeof(int))); //integer is 4 bytes
printf("Long size : %d\n",size(sizeof(long))); //long is 8 bytes
printf("Short size : %d\n",size(sizeof(short))); // Short is 2
printf("Char size : %d\n",size(sizeof(char))); // 1
printf("Double size : %d\n",size(sizeof(double)));// 8
printf("Unsigned Integer size : %d\n",size(sizeof(unsigned int))); //4
printf("Unsigned long Integer size : %d\n",size(sizeof(unsigned long int))); //8
printf("long double size : %d\n",size(sizeof(long double))); //16
printf("Long Long Integer size : %d\n",size(sizeof(long long int))); //8
printf("Unsigned Long Long Integer size : %d\n",size(sizeof(unsigned long long int))); //8
printf("%d\n",size(sizeof(NULL)));  //8
  return 0;
}

int size(long unsigned int a){
return (int)a;

}
