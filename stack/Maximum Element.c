#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct stack
{
    int data[100000];
    int top;
}st;
//struct stack st;
int max=0;
void push()
{
    int item;
    scanf("%d",&item);
    st.top++;
    st.data[st.top]=item;
    if(max<st.data[st.top])
        max=st.data[st.top];

}
void pop()
{
    int i;
    if(max == st.data[st.top])
        max=0;
    st.top--;
     for(i=st.top;i>=0;i--)
        if(max<st.data[i])
            max=st.data[i];
}

int main()
{
    int t,n,i,choice;
    st.top = -1;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :push();
            break;
            case 2:pop();
            break;
            case 3: printf("%d\n",max);
            break;
        }
    }
    return 0;
}
