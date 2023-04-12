#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char s[1000];
    scanf("%s",&s);
    int i,count;
    char arr[]="0123456789";
    for(i=0;i<=9;i++){
        count=0;
        for(int j=0;j<strlen(s);j++){
            if(s[j]==arr[i]){
                count++;
            }
            else {
                continue;
            }
        }
        printf("%d ",count);
    }
       
    return 0;
}
