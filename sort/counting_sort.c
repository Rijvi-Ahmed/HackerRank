#include<stdio.h>
int main(){
    int a[50],i,n,k,max;
    int output[strlen(a)];
    printf("Enter the element of array:\n");
    scanf("%d", &n);

    printf("Enter the elements of %d\n", n);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
        if(a[i]>max){
            max=a[i];
        }
    k=max;
    int count[k+1];

    memset(count, 0, sizeof(count));

   /* for(i=0;i<k+1;i++){
        count[i]=0;
    }*/

    for(i=0;i<n;i++){
        ++count[a[i]];
    }

    for (i = 1; i <= k; ++i)
        count[i] += count[i-1];

    for (i=n-1;i>=0;i--){
            --count[a[i]];
        output[count[a[i]]] = a[i];

    }
     for (i = 0; i<n; i++)
        a[i] = output[i];


     for (i = 0; i<n; i++)
        printf("%d ", a[i]);



        return 0;
    }












