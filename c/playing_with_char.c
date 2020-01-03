#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch;
    char str[20];
    char string[20];
    scanf("%c\n" ,&ch);
    scanf("%s\n" ,&string);
    scanf("%[^\n]%*c", str);

    printf("%c\n" ,ch);
    printf("%s\n" ,string);
    printf("%s", str);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}


