#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int t,sum=0;
    while (n!=0) {
        t=n%10;
        sum=sum+t;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
