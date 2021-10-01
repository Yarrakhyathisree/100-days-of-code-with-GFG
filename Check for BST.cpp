class Solution
{
    public:
    
    bool check(Node * root,long long int mini,long long int maxi){
        if(root==NULL)return 1;
        
        if(root->data <= mini || root->data>=maxi)return 0;
        
        return check(root->left,mini,root->data) && check(root->right,root->data,maxi);
    }
    
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        // Your code here
        if(root==NULL){
            return 1;
        }
        long long int mini=-214748364885858;
        long long int  maxi=214748364885858;
        
        return check(root,mini,maxi);
    }
};