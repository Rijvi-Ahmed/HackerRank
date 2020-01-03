#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i;
    scanf("%d", &n);
    int digit, temp, sum = 0;
    temp = n;
    //Complete the code to calculate the sum of the five digits on n.
    for(i=0;i<n;i++)
    {
        digit = temp % 10;//5 digit or tar kom sokha thakle 10 er od korle ses digit paua jai
        sum = sum + digit;
        temp = temp / 10;//5 digit or tar kom sokha thakle 10 dia divide korle tar ses digit haria jai
    }
    printf("%d\n",sum);
    return 0;
}
