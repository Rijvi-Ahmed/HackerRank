#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ar[1000],i;
    //assci 48=0,49=1,.....57=9
    int j,count;
    scanf("%[^\n]", ar);//new line er jonno
    //scanf("%s", ar);//string er jonno without space
    for(i=48;i<=57;i++){
            count=0;
        for(j=0;j<strlen(ar);j++){
            if(ar[j]==i){
                count++;
            }
        }
        printf("%d ", count);
    }

    return 0;
}
