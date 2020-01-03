#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *  ar) {

   int j,tmp=ar[ar_size-1],k;
    for(j=ar_size-1; j>=1;j--)
        {
            if(tmp<ar[j-1])
                ar[j]=ar[j-1];
            else
                break;
        for(k=0; k<ar_size;k++)
        printf("%d ", ar[k]);
        printf("\n");
        }
    ar[j]=tmp;
    for(k=0; k<ar_size;k++)
        printf("%d ", ar[k]);

}
int main(void) {
    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
        scanf("%d", &_ar[_ar_i]);
    }

    insertionSort(_ar_size, _ar);
    return 0;
}

