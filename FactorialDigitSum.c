#include <stdio.h>
#include <stdlib.h>
int main(){
  int sum = 0;
  long prod = 100;
  int ctr = 99;
  while (ctr>0){
    printf("%ld\n", prod);
    prod*=ctr;
    ctr--;
  }
  printf("%ld\n", prod);
  while (prod>0){
    printf("%ld\n", prod);
    sum+=prod%10;
    prod/=10;
  }
  printf("%d\n", sum);
  return sum;
}
