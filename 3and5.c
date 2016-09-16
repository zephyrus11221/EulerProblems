#include <stdio.h>
#include <stdlib.h>
int main(){
  int sum=0;
  int ctr;
  for(ctr=0;ctr-1000;ctr++){
    printf("%d\n", ctr);
    if(ctr%3==0||ctr%5==0){
      sum+=ctr;
    }
  }
  printf("%d\n", sum);
  return sum;
}
