#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    gets(s);
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]!=' '){
            printf("%c",s[i]);
        }
        else {
            printf("\n");
        }
    }
    //Write your logic to print the tokens of the sentence here.
    return 0;
    
}
