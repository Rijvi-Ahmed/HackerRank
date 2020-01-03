#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int i;
    s = (char*)malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int l=strlen(s);
    for(i=0;i<l;i++){
        if(s[i]!=' '){
            printf("%c", s[i]);
        }
        else
            printf("\n");
    }
    //Write your logic to print the tokens of the sententce here.
    return 0;
}


