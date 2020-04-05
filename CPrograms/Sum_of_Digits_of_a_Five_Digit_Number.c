#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,t;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum=0, remainder;
    t=n;
    while(t!=0)
    {
        remainder=t%10;
        sum=sum + remainder;
        t=t/10;
    }
    printf("%d\n", sum);
    return 0;
}
