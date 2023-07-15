/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    
    Node *first=head1;
    Node *second=head2;
    
    while(first!=second)
    {
        first=first==NULL?head2:first->next;
        second=second==NULL?head1:second->next;
    }
    if(first==NULL)
    return -1;
    return first->data;
}