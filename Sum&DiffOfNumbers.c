#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,sum,diff;
    float a1,b1,sum1,diff2;
    scanf("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    scanf("%f %f",&a1,&b1);
    sum1=a1+b1;
    diff2=a1-b1;
    printf("%d %d\n",sum,diff);
    printf("%.1f %.1f",sum1,diff2);
	
    
    return 0;
}
