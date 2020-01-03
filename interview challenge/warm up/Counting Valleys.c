#include <stdio.h>
#include<string.h>
/*

*/
int main() {
    int n,updown = 0,res = 0;
    char c;
    scanf("%d", &n);

    for(int i = 0; i<n;i++){
        scanf("%c", &c);
        if(c == 'U')updown++;
        else updown--;
        if(updown == 0 && c == 'U')res++;
    }
    printf("%d", res);
    return 0;
}
