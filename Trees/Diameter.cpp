#include<iostream>
#include<stdio.h>
#include<math.h>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
class Diameter {
  public:
    // Function to return the diameter of a Binary Tree.
    int height(Node *root, int &maximum)
    {
        if(root==NULL)
        return 0;
        int lh=height(root->left, maximum);
        int rh=height(root->right, maximum);
        if((lh+rh)>maximum)
        {
            maximum=lh+rh;
        }
        return 1+max(lh, rh);
    }
    int diameter(Node* root) {
        // Your code here
        int maximum=INT_MIN;
        int h=height(root, maximum);
        return maximum+1;
        
    }
};