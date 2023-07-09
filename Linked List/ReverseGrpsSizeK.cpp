class Solution
{
    public:
    
    struct node *reverse (struct node *head, int k)
    { 
        
        int i=0;
        node *prev=NULL;
        node *curr=head;
        node *fwd;
        while(i<k && curr!=NULL)
        {
            fwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fwd;
            i++;
        }// idhar se doubt
        
        if(fwd!=NULL)
        {
            head->next=reverse(fwd,k);
        }
        return prev;
    }
    
};