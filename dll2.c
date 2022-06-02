#include<stdio.h>
#include<stdlib.h>

typedef struct dll
{
    int data;
    struct dll *next;
    struct dll *prev
}*node;

node getnode(int num);
node insert(node head,int num);
node reverse(node head,int k);
void display(node head);

int main()
{
    node head=NULL;
    int n,k,num;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        head=insert(head,num);
    }
    head=reverse(head,k);
    display(head);
    return 0;
}

node getnode(int num)
{
    node newnode;
    newnode=(node)malloc(sizeof(struct dll));
    if(newnode==NULL)
        exit(0);
    newnode->data=num;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
}

node insert(node head,int num)
{
    node newnode=getnode(num);
    if(head==NULL)
    {
        head=newnode;
        return head;
    }
    node cur;
    cur=head;
    while(cur->next!=NULL)
    {
        cur=cur->next;
    }
    cur->next=newnode;
    newnode->prev=cur;
    return head;
}

node reverse(node head,int k)
{
    if(head==NULL)
        return head;
    int c=0;
    node cur=head,nxt=NULL,p=NULL;
    while(cur!=NULL && c<k)
    {
        nxt=cur->next;
        cur->next=p;
        p=cur;
        cur=nxt;
        c++;
    }
    if(nxt!=NULL)
    {
        head->next=reverse(nxt,k);
    }
    return p;
}

void display(node head)
{
    if(head==NULL)
        printf("Linked list is empty.\n");
    else
    {
        node cur = head;
        while(cur!=NULL)
        {
            printf("%d ", cur->data);
            cur = cur->next;
        }
    }
}
