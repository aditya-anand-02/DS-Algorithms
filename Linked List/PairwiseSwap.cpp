class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        if(head==NULL || head->next==NULL)
        return head;
        Node *prev=new Node(-1);
        Node *curr=head;
        Node *start=prev;
        while(curr!=NULL && curr->next!=NULL)
        {
            Node *fwd=curr->next;
            curr->next=fwd->next;
            fwd->next=curr;
            prev->next=fwd;
            prev=curr;
            curr=curr->next;
        }
        return start->next;
    }
};