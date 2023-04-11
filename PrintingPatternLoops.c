#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int size=(n*2)-1;
    int arr[size],start,stop;
    for(int i=-(size/2);i<=(size/2);i++){
        start=size-abs(i)-n;
        stop=size-1-start;
        for (int p=start; p<=stop; p++) {
            arr[p]=n-start;
        }
        for(int j=0;j<size;j++){
            printf("%d ",arr[j]);
        }
        printf("\n");
    }
  	// Complete the code to print the pattern.
    return 0;
}
