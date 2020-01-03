#include <stdio.h>
#define MAX_SIZE 1000 // Maximum array size

int main()
{
    int arr[MAX_SIZE]; // Declare an array of MAX_SIZE
    int i, N , d;

    /* Input array size */
    //printf("Enter size of array: ");
    scanf("%d %d", &N,&d);

    /* Input elements in array */
    //printf("Enter %d elements in the array : ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<d;i++){
      //int temp=arr[0];
      for(int j=0;j<N-1;j++){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }

    for(i=0; i<N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
