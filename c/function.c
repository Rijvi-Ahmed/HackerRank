#include <stdio.h>

int max_of_four(int a, int b, int c, int d){

 int max;
if(a > b)
{
    max = a;
}
else
{
    max = b;
}
if(c > d)
{
    if(c > max)
    {
        max = c;
    }
}
else
{
    if(d > max)
    {
        max = d;
    }
}
return max;
}





int main() {
    int a, b, c, d;
    scanf("%d\n %d\n %d\n %d\n", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

