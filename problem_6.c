#include <stdio.h>

int main(){
  long sum1 = 0.0;
  long sum2 = 0.0;
  for(int i = 1; i < 101; i++){
    sum2 += (i * i);
    sum1 += i;
  }
  long ans = (sum1 * sum1) - sum2;
  printf("%ld\n",ans);
  return 1;
}
