#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int i,j,a,b,ABand,ABor,ABxor,A=0,B=0,C=0;
  for(i=1; i<n; i++){
      a=i;
      for(j=i+1; j<=n; j++){
          b=j;
          ABand=a&b;
          ABor=a|b;
          ABxor=a^b;
          if(ABand<k && ABand>A)
          A=ABand;
           if(ABor<k && ABor>B)
          B=ABor;
           if(ABxor<k &&ABxor>C)
          C=ABxor;
      }
  }
printf("%d\n%d\n%d",A,B,C);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
