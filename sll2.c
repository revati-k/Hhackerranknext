SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* newnode,*temp,*current;
    newnode=(struct SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    current=llist;
    temp=llist;
    if(llist==NULL)
    {
        llist=newnode;
        newnode->data=data;
        newnode->next=NULL;
        return llist;
    }
    else{
        for(int i=0;i<position;i++)
        {
            current=temp;
            temp=temp->next;
        }
        current->next=newnode;
        newnode->data=data;
        newnode->next=temp;
        return llist;
    }

}
