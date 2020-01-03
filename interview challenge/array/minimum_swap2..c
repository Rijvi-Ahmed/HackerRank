#include<stdio.h>
#include<stdlib.h>

int minimumSwaps(int arr_count, int* arr) {

long long int i,count=0,j,temp,min,min_index;
for(i=0;i<arr_count;i++)
{
    min=arr[i];
    min_index=i;
    for(j=i+1;j<arr_count;j++)
    {
        if(arr[j]<min)
        {
            min=arr[j];
            min_index=j;
        }
    }
    if(min_index!=i)
    {
        count++;
    temp=arr[min_index];
    arr[min_index]=arr[i];
    arr[i]=temp;
    }
    }
return count;
}

int main(){
    int n,c_i,result;
    scanf("%d",&n);
    int *c = (int*)malloc(sizeof(int) * n);
    for(c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
       result=minimumSwaps(n,c);
       printf("%d", result);
       return 0;





}
