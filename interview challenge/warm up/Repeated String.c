#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){

    //string str;
    int i,count=0;
    long long n;

   char* s = (char *)malloc(1000000 * sizeof(char));
   scanf("%s", s);
   scanf("%ll", &n);

   for(i=0;i<strlen(s);i++){
    if(s[i]=='a'){
        count++;
    }
   }
   count=count*(n/strlen(s));

   for(i=0;i<(n%strlen(s));i++){
    if(s[i]=='a'){
        count++;
    }
   }
   printf("%d", count);
}
