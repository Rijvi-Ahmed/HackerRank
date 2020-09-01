#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

};
int main()
{
    struct node *head,*newnode,*temp;
    int count=0,choice,i;
    head=0;
    scanf("%d",&choice);
    for(i=0; i<choice; i++)
    {
        newnode=(struct node*) malloc (sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }

    }
    temp=head;
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }


    return 0;
}
