bool search(Node* root, int x) {
    // Your code here
    if(root==NULL)
    return false;
    if(x==root->data)
    return true;
    bool flag=false;
    if(x<root->data)
    flag= search(root->left, x);
    if(x> root->data)
    flag= search(root->right, x);
    return flag;
    
}