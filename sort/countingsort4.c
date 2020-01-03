#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
       int n,i,j,k,a;
       scanf("%d",&n);
       int count[100]={0};
       char s[1000];
       for(i=0;i<n;i++)
       {
              scanf("%d",&a);
              scanf("%s",s);
              count[a]++;
       }
       k = 0;
       for(i=0;i<100;i++)
       {
              count[i] = count[i] + k;
              printf("%d ",count[i]);
              k = count[i];
       }
    return 0;
}

