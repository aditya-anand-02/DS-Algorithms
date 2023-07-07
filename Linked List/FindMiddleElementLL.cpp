class FindMiddleElementLL{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getsize(Node *head)
    {
        Node *temp=head;
        int count=1;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            count++;
        }
        return count;
    }
    
    int getMiddle(Node *head)
    {
        int size=getsize(head);
        int ctr=1;
        Node *temp=head;
        while(ctr<(size+1)/2)
        {
            temp=temp->next;
            ctr++;
        }
        if(size%2!=0)
        {
            return temp->data;
        }
        else
        {
            temp=temp->next;
            return temp->data;
        }
    }
};